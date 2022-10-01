// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETLOCALCONSOLEPASSWORDREQUEST_P_H
#define QTAWS_SETLOCALCONSOLEPASSWORDREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "setlocalconsolepasswordrequest.h"

namespace QtAws {
namespace StorageGateway {

class SetLocalConsolePasswordRequest;

class SetLocalConsolePasswordRequestPrivate : public StorageGatewayRequestPrivate {

public:
    SetLocalConsolePasswordRequestPrivate(const StorageGatewayRequest::Action action,
                                   SetLocalConsolePasswordRequest * const q);
    SetLocalConsolePasswordRequestPrivate(const SetLocalConsolePasswordRequestPrivate &other,
                                   SetLocalConsolePasswordRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetLocalConsolePasswordRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
