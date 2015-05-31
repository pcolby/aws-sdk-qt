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

#ifndef SQSREQUEST_P_H
#define SQSREQUEST_P_H

#include "qtawsglobal.h"

class QUrl;
class QUrlQuery;

QTAWS_BEGIN_NAMESPACE

class SqsRequest;

class QTAWS_EXPORT SqsRequestPrivate {

public:
    QString action;
    QString apiVersion;

    SqsRequestPrivate(SqsRequest * const q);

    QUrlQuery query() const;
    QUrl url() const;

private:
    Q_DECLARE_PUBLIC(SqsRequest)
    SqsRequest * const q_ptr; ///< Internal q-pointer.

};

QTAWS_END_NAMESPACE

#endif
