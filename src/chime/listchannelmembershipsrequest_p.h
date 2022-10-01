// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELMEMBERSHIPSREQUEST_P_H
#define QTAWS_LISTCHANNELMEMBERSHIPSREQUEST_P_H

#include "chimerequest_p.h"
#include "listchannelmembershipsrequest.h"

namespace QtAws {
namespace Chime {

class ListChannelMembershipsRequest;

class ListChannelMembershipsRequestPrivate : public ChimeRequestPrivate {

public:
    ListChannelMembershipsRequestPrivate(const ChimeRequest::Action action,
                                   ListChannelMembershipsRequest * const q);
    ListChannelMembershipsRequestPrivate(const ListChannelMembershipsRequestPrivate &other,
                                   ListChannelMembershipsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListChannelMembershipsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
