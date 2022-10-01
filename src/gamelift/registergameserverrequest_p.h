// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERGAMESERVERREQUEST_P_H
#define QTAWS_REGISTERGAMESERVERREQUEST_P_H

#include "gameliftrequest_p.h"
#include "registergameserverrequest.h"

namespace QtAws {
namespace GameLift {

class RegisterGameServerRequest;

class RegisterGameServerRequestPrivate : public GameLiftRequestPrivate {

public:
    RegisterGameServerRequestPrivate(const GameLiftRequest::Action action,
                                   RegisterGameServerRequest * const q);
    RegisterGameServerRequestPrivate(const RegisterGameServerRequestPrivate &other,
                                   RegisterGameServerRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterGameServerRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
