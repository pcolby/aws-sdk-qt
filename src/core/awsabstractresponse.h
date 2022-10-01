// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef AWSABSTRACTRESPONSE_H
#define AWSABSTRACTRESPONSE_H

#include "qtawscoreglobal.h"

#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Core {

class AwsAbstractRequest;
class AwsAbstractResponsePrivate;

class QTAWSCORE_EXPORT AwsAbstractResponse : public QObject {
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
    static QMultiMap<QString, QVariant> toVariant(QXmlStreamReader &xml,
                                 const QString &prefix = QLatin1String("."),
                                 const int maxDepth = 1024);

Q_SIGNALS:
    void finished();

protected:
    /// @cond internal
    AwsAbstractResponsePrivate * const d_ptr; ///< Internal d-pointer.
    AwsAbstractResponse(AwsAbstractResponsePrivate * const d, QObject * const parent);
    /// @endcond

    virtual bool isSuccess(QNetworkReply * const reply) const;
    void setReply(QNetworkReply * const reply);
    void setRequest(const AwsAbstractRequest * const request);
    void setXmlError(const QXmlStreamReader &xml);

    virtual void parse(QNetworkReply * const reply);
    virtual void parseFailure(QIODevice &response) = 0;
    virtual void parseSuccess(QIODevice &response) = 0;

protected Q_SLOTS:
    virtual void replyFinished();

private:
    Q_DECLARE_PRIVATE(AwsAbstractResponse)
    Q_DISABLE_COPY(AwsAbstractResponse)
    friend class TestAwsAbstractResponse;

};

} // namespace Core
} // namespace QtAws

#endif
