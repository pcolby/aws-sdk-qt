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

#ifndef QTAWS_LISTTRAFFICPOLICYINSTANCESBYPOLICYREQUEST_P_H
#define QTAWS_LISTTRAFFICPOLICYINSTANCESBYPOLICYREQUEST_P_H

#include "route53_p.h"
#include "listtrafficpolicyinstancesbypolicyrequest.h"

namespace AWS {

namespace Route53 {

class ListTrafficPolicyInstancesByPolicyRequest;

class QTAWS_EXPORT ListTrafficPolicyInstancesByPolicyRequestPrivate : public Route53Private {

public:
    ListTrafficPolicyInstancesByPolicyRequestPrivate(const Route53::Action action,
                                   ListTrafficPolicyInstancesByPolicyRequest * const q);
    ListTrafficPolicyInstancesByPolicyRequestPrivate(const ListTrafficPolicyInstancesByPolicyRequestPrivate &other,
                                   ListTrafficPolicyInstancesByPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTrafficPolicyInstancesByPolicyRequest)

};

} // namespace Route53
} // namespace AWS

#endif
