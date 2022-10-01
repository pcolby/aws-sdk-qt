// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAUNCHPROFILEINITIALIZATIONREQUEST_P_H
#define QTAWS_GETLAUNCHPROFILEINITIALIZATIONREQUEST_P_H

#include "nimblerequest_p.h"
#include "getlaunchprofileinitializationrequest.h"

namespace QtAws {
namespace Nimble {

class GetLaunchProfileInitializationRequest;

class GetLaunchProfileInitializationRequestPrivate : public NimbleRequestPrivate {

public:
    GetLaunchProfileInitializationRequestPrivate(const NimbleRequest::Action action,
                                   GetLaunchProfileInitializationRequest * const q);
    GetLaunchProfileInitializationRequestPrivate(const GetLaunchProfileInitializationRequestPrivate &other,
                                   GetLaunchProfileInitializationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLaunchProfileInitializationRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
