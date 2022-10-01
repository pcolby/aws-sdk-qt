// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICESREQUEST_P_H
#define QTAWS_LISTDEVICESREQUEST_P_H

#include "worklinkrequest_p.h"
#include "listdevicesrequest.h"

namespace QtAws {
namespace WorkLink {

class ListDevicesRequest;

class ListDevicesRequestPrivate : public WorkLinkRequestPrivate {

public:
    ListDevicesRequestPrivate(const WorkLinkRequest::Action action,
                                   ListDevicesRequest * const q);
    ListDevicesRequestPrivate(const ListDevicesRequestPrivate &other,
                                   ListDevicesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDevicesRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
