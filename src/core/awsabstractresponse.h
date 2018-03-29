/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef AWSABSTRACTRESPONSE_H
#define AWSABSTRACTRESPONSE_H

#include "qtawsglobal.h"

#include <QNetworkReply>
#include <QXmlStreamReader>

QTAWS_BEGIN_NAMESPACE

class AwsAbstractRequest;
class AwsAbstractResponsePrivate;

class QTAWS_EXPORT AwsAbstractResponse : public QObject {
    Q_OBJECT

public:
    AwsAbstractResponse(QObject * const parent = 0);

    virtual ~AwsAbstractResponse();

    virtual QString errorString() const;
    virtual bool hasError() const;
    virtual bool isValid() const;
    virtual QNetworkReply::NetworkError networkError() const;
    virtual QXmlStreamReader::Error xmlParseError() const;
    virtual QString xmlParseErrorString() const;

    virtual const AwsAbstractRequest * request() const = 0;

    /// @todo Find a better home for "QVariantMap toVariant(QXmlStreamReader &xml, ...)"
    static QVariantMap toVariant(QXmlStreamReader &xml,
                                 const QString &prefix = QLatin1String("."),
                                 const int maxDepth = 1024);

protected:
    /// @cond internal
    AwsAbstractResponsePrivate * const d_ptr; ///< Internal d-pointer.
    AwsAbstractResponse(AwsAbstractResponsePrivate * const d, QObject * const parent);
    /// @endcond

    virtual bool isSuccess(QNetworkReply * const reply) const;
    void setReply(QNetworkReply * reply);
    void setRequest(const AwsAbstractRequest * const request);
    void setXmlError(const QXmlStreamReader &xml);

    virtual void parse(QNetworkReply * const reply);
    virtual void parseFailure(QIODevice &response) = 0;
    virtual void parseSuccess(QIODevice &response) = 0;

protected slots:
    virtual void replyFinished();

private:
    Q_DECLARE_PRIVATE(AwsAbstractResponse)
    Q_DISABLE_COPY(AwsAbstractResponse)
    friend class TestAwsAbstractResponse;

signals:
    void finished();

};

QTAWS_END_NAMESPACE

#endif
