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

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractResponsePrivate;

class QTAWS_EXPORT AwsAbstractResponse : public QObject {
    Q_OBJECT

public:
    AwsAbstractResponse(QNetworkReply * const reply, QObject * const parent = 0);
    AwsAbstractResponse(QObject * const parent);

    virtual ~AwsAbstractResponse();

    virtual bool isErrorResponse() const;
    virtual bool isValid() const = 0;

    virtual bool parse(QNetworkReply * const reply) = 0;

private:
    Q_DECLARE_PRIVATE(AwsAbstractResponse)
    AwsAbstractResponsePrivate * const d_ptr; ///< Internal d-pointer.

signals:
    /// @todo Any signals?

};

QTAWS_END_NAMESPACE

#endif
