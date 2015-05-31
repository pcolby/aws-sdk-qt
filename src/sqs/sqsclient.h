/*
    Copyright 2013 Paul Colby

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

#ifndef SQSCLIENT_H
#define SQSCLIENT_H

#include "awsabstractservice.h"
#include "qtawsglobal.h"

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractService;
class SqsClientPrivate;

class QTAWS_EXPORT SqsClient : public AwsAbstractService {
    Q_OBJECT

public:
    SqsClient(QObject * const parent = 0);

    ~SqsClient();

public slots:
    QNetworkReply * createQueue(); /// @todo Will need some params; just an example for now.

private:
    Q_DECLARE_PRIVATE(SqsClient)
    SqsClientPrivate * const d_ptr; ///< Internal d-pointer.

};

QTAWS_END_NAMESPACE

#endif
