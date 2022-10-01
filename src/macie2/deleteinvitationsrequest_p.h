// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINVITATIONSREQUEST_P_H
#define QTAWS_DELETEINVITATIONSREQUEST_P_H

#include "macie2request_p.h"
#include "deleteinvitationsrequest.h"

namespace QtAws {
namespace Macie2 {

class DeleteInvitationsRequest;

class DeleteInvitationsRequestPrivate : public Macie2RequestPrivate {

public:
    DeleteInvitationsRequestPrivate(const Macie2Request::Action action,
                                   DeleteInvitationsRequest * const q);
    DeleteInvitationsRequestPrivate(const DeleteInvitationsRequestPrivate &other,
                                   DeleteInvitationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteInvitationsRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
