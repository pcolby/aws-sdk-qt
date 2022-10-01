// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCESHAREINVITATIONSREQUEST_P_H
#define QTAWS_GETRESOURCESHAREINVITATIONSREQUEST_P_H

#include "ramrequest_p.h"
#include "getresourceshareinvitationsrequest.h"

namespace QtAws {
namespace Ram {

class GetResourceShareInvitationsRequest;

class GetResourceShareInvitationsRequestPrivate : public RamRequestPrivate {

public:
    GetResourceShareInvitationsRequestPrivate(const RamRequest::Action action,
                                   GetResourceShareInvitationsRequest * const q);
    GetResourceShareInvitationsRequestPrivate(const GetResourceShareInvitationsRequestPrivate &other,
                                   GetResourceShareInvitationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetResourceShareInvitationsRequest)

};

} // namespace Ram
} // namespace QtAws

#endif
