// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKSPACESREQUEST_P_H
#define QTAWS_LISTWORKSPACESREQUEST_P_H

#include "iottwinmakerrequest_p.h"
#include "listworkspacesrequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class ListWorkspacesRequest;

class ListWorkspacesRequestPrivate : public IoTTwinMakerRequestPrivate {

public:
    ListWorkspacesRequestPrivate(const IoTTwinMakerRequest::Action action,
                                   ListWorkspacesRequest * const q);
    ListWorkspacesRequestPrivate(const ListWorkspacesRequestPrivate &other,
                                   ListWorkspacesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListWorkspacesRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
