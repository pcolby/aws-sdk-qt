// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELMEMBERSHIPSFORAPPINSTANCEUSERREQUEST_P_H
#define QTAWS_LISTCHANNELMEMBERSHIPSFORAPPINSTANCEUSERREQUEST_P_H

#include "chimerequest_p.h"
#include "listchannelmembershipsforappinstanceuserrequest.h"

namespace QtAws {
namespace Chime {

class ListChannelMembershipsForAppInstanceUserRequest;

class ListChannelMembershipsForAppInstanceUserRequestPrivate : public ChimeRequestPrivate {

public:
    ListChannelMembershipsForAppInstanceUserRequestPrivate(const ChimeRequest::Action action,
                                   ListChannelMembershipsForAppInstanceUserRequest * const q);
    ListChannelMembershipsForAppInstanceUserRequestPrivate(const ListChannelMembershipsForAppInstanceUserRequestPrivate &other,
                                   ListChannelMembershipsForAppInstanceUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListChannelMembershipsForAppInstanceUserRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
