/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_GETREPLICATIONRUNSREQUEST_P_H
#define QTAWS_GETREPLICATIONRUNSREQUEST_P_H

#include "sms_p.h"
#include "getreplicationrunsrequest.h"

namespace AWS {

namespace SMS {

class GetReplicationRunsRequest;

class QTAWS_EXPORT GetReplicationRunsRequestPrivate : public SMSPrivate {

public:
    GetReplicationRunsRequestPrivate(const SMS::Action action,
                                   GetReplicationRunsRequest * const q);
    GetReplicationRunsRequestPrivate(const GetReplicationRunsRequestPrivate &other,
                                   GetReplicationRunsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetReplicationRunsRequest)

};

} // namespace SMS
} // namespace AWS

#endif
