/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_GETCORENETWORKPOLICYREQUEST_P_H
#define QTAWS_GETCORENETWORKPOLICYREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "getcorenetworkpolicyrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetCoreNetworkPolicyRequest;

class GetCoreNetworkPolicyRequestPrivate : public NetworkManagerRequestPrivate {

public:
    GetCoreNetworkPolicyRequestPrivate(const NetworkManagerRequest::Action action,
                                   GetCoreNetworkPolicyRequest * const q);
    GetCoreNetworkPolicyRequestPrivate(const GetCoreNetworkPolicyRequestPrivate &other,
                                   GetCoreNetworkPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCoreNetworkPolicyRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
