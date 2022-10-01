// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETSMBGUESTPASSWORDREQUEST_P_H
#define QTAWS_SETSMBGUESTPASSWORDREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "setsmbguestpasswordrequest.h"

namespace QtAws {
namespace StorageGateway {

class SetSMBGuestPasswordRequest;

class SetSMBGuestPasswordRequestPrivate : public StorageGatewayRequestPrivate {

public:
    SetSMBGuestPasswordRequestPrivate(const StorageGatewayRequest::Action action,
                                   SetSMBGuestPasswordRequest * const q);
    SetSMBGuestPasswordRequestPrivate(const SetSMBGuestPasswordRequestPrivate &other,
                                   SetSMBGuestPasswordRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetSMBGuestPasswordRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
