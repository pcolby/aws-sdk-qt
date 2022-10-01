// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSTUDIOMEMBERSREQUEST_P_H
#define QTAWS_PUTSTUDIOMEMBERSREQUEST_P_H

#include "nimblerequest_p.h"
#include "putstudiomembersrequest.h"

namespace QtAws {
namespace Nimble {

class PutStudioMembersRequest;

class PutStudioMembersRequestPrivate : public NimbleRequestPrivate {

public:
    PutStudioMembersRequestPrivate(const NimbleRequest::Action action,
                                   PutStudioMembersRequest * const q);
    PutStudioMembersRequestPrivate(const PutStudioMembersRequestPrivate &other,
                                   PutStudioMembersRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutStudioMembersRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
