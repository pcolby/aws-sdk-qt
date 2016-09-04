/*
    Copyright 2013-2016 Paul Colby

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

#ifndef SQSRECEIVEMESSAGEREQUEST_P_H
#define SQSRECEIVEMESSAGEREQUEST_P_H

#include "sqsreceivemessagerequest.h"
#include "sqsrequest_p.h"

QTAWS_BEGIN_NAMESPACE

class SqsReceiveMessageRequest;

class QTAWS_EXPORT SqsReceiveMessageRequestPrivate : public SqsRequestPrivate {

public:
    SqsReceiveMessageRequestPrivate(const SqsRequest::Action action,
                                   SqsReceiveMessageRequest * const q);
    SqsReceiveMessageRequestPrivate(const SqsReceiveMessageRequestPrivate &other,
                                   SqsReceiveMessageRequest * const q);

private:
    Q_DECLARE_PUBLIC(SqsReceiveMessageRequest)

};

QTAWS_END_NAMESPACE

#endif
