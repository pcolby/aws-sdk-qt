// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTARCHIVESREQUEST_P_H
#define QTAWS_LISTARCHIVESREQUEST_P_H

#include "eventbridgerequest_p.h"
#include "listarchivesrequest.h"

namespace QtAws {
namespace EventBridge {

class ListArchivesRequest;

class ListArchivesRequestPrivate : public EventBridgeRequestPrivate {

public:
    ListArchivesRequestPrivate(const EventBridgeRequest::Action action,
                                   ListArchivesRequest * const q);
    ListArchivesRequestPrivate(const ListArchivesRequestPrivate &other,
                                   ListArchivesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListArchivesRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
