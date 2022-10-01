// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINPUTSECURITYGROUPSREQUEST_P_H
#define QTAWS_LISTINPUTSECURITYGROUPSREQUEST_P_H

#include "medialiverequest_p.h"
#include "listinputsecuritygroupsrequest.h"

namespace QtAws {
namespace MediaLive {

class ListInputSecurityGroupsRequest;

class ListInputSecurityGroupsRequestPrivate : public MediaLiveRequestPrivate {

public:
    ListInputSecurityGroupsRequestPrivate(const MediaLiveRequest::Action action,
                                   ListInputSecurityGroupsRequest * const q);
    ListInputSecurityGroupsRequestPrivate(const ListInputSecurityGroupsRequestPrivate &other,
                                   ListInputSecurityGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListInputSecurityGroupsRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
