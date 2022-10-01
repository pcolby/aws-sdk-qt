// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTUDIOMEMBERSREQUEST_P_H
#define QTAWS_LISTSTUDIOMEMBERSREQUEST_P_H

#include "nimblerequest_p.h"
#include "liststudiomembersrequest.h"

namespace QtAws {
namespace Nimble {

class ListStudioMembersRequest;

class ListStudioMembersRequestPrivate : public NimbleRequestPrivate {

public:
    ListStudioMembersRequestPrivate(const NimbleRequest::Action action,
                                   ListStudioMembersRequest * const q);
    ListStudioMembersRequestPrivate(const ListStudioMembersRequestPrivate &other,
                                   ListStudioMembersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListStudioMembersRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
