// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DECLINEINVITATIONSREQUEST_P_H
#define QTAWS_DECLINEINVITATIONSREQUEST_P_H

#include "macie2request_p.h"
#include "declineinvitationsrequest.h"

namespace QtAws {
namespace Macie2 {

class DeclineInvitationsRequest;

class DeclineInvitationsRequestPrivate : public Macie2RequestPrivate {

public:
    DeclineInvitationsRequestPrivate(const Macie2Request::Action action,
                                   DeclineInvitationsRequest * const q);
    DeclineInvitationsRequestPrivate(const DeclineInvitationsRequestPrivate &other,
                                   DeclineInvitationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeclineInvitationsRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
