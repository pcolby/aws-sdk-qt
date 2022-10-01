// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNETWORKPROFILESREQUEST_P_H
#define QTAWS_LISTNETWORKPROFILESREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "listnetworkprofilesrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListNetworkProfilesRequest;

class ListNetworkProfilesRequestPrivate : public DeviceFarmRequestPrivate {

public:
    ListNetworkProfilesRequestPrivate(const DeviceFarmRequest::Action action,
                                   ListNetworkProfilesRequest * const q);
    ListNetworkProfilesRequestPrivate(const ListNetworkProfilesRequestPrivate &other,
                                   ListNetworkProfilesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListNetworkProfilesRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
