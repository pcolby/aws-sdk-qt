// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINVITATIONSREQUEST_P_H
#define QTAWS_CREATEINVITATIONSREQUEST_P_H

#include "macie2request_p.h"
#include "createinvitationsrequest.h"

namespace QtAws {
namespace Macie2 {

class CreateInvitationsRequest;

class CreateInvitationsRequestPrivate : public Macie2RequestPrivate {

public:
    CreateInvitationsRequestPrivate(const Macie2Request::Action action,
                                   CreateInvitationsRequest * const q);
    CreateInvitationsRequestPrivate(const CreateInvitationsRequestPrivate &other,
                                   CreateInvitationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateInvitationsRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
