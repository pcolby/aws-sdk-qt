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

#ifndef SQSCLIENT_P_H
#define SQSCLIENT_P_H

#include "awsabstractservice_p.h"
#include "qtawsglobal.h"

class QNetworkAccessManager;

QTAWS_BEGIN_NAMESPACE

class SqsClient;

class QTAWS_EXPORT SqsClientPrivate : public AwsAbstractServicePrivate {

public:

    SqsClientPrivate(SqsClient * const q);

private:
    Q_DECLARE_PUBLIC(SqsClient)
    SqsClient * const q_ptr; ///< Internal q-pointer.

};

QTAWS_END_NAMESPACE

#endif
