/*
    Copyright 2013-2015 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef AWSABSTRACTRESPONSE_H
#define AWSABSTRACTRESPONSE_H

#include "qtawsglobal.h"

#include <QNetworkReply>

QTAWS_BEGIN_NAMESPACE

class AwsAbstractResponsePrivate;

class QTAWS_EXPORT AwsAbstractResponse : public QObject {
    Q_OBJECT

public:
    AwsAbstractResponse(QObject * const parent = 0);

    virtual ~AwsAbstractResponse();

    virtual QString errorString() const;
    virtual bool hasError() const;
    virtual bool isValid() const = 0;
    virtual QNetworkReply::NetworkError networkError() const;

protected:
    /// @cond internal
    AwsAbstractResponsePrivate * const d_ptr; ///< Internal d-pointer.
    AwsAbstractResponse(AwsAbstractResponsePrivate * const d, QObject * const parent);
    /// @endcond

    void setReply(QNetworkReply * reply);

protected slots:
    virtual bool parse(QNetworkReply * const reply);
    virtual bool parseError(QIODevice &response) = 0;
    virtual bool parseSuccess(QIODevice &response) = 0;

private:
    Q_DECLARE_PRIVATE(AwsAbstractResponse)
    Q_DISABLE_COPY(AwsAbstractResponse)

//signals:
    //void error(QNetworkReply::Error);
    //void error(SQSError?);
    //void finished(...);
    // networkError(error)
    // parseError(error, line, charoffset)
    // serviceError(error, type, etc)
};

QTAWS_END_NAMESPACE

#endif
