// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAUNCHPROFILEREQUEST_P_H
#define QTAWS_GETLAUNCHPROFILEREQUEST_P_H

#include "nimblerequest_p.h"
#include "getlaunchprofilerequest.h"

namespace QtAws {
namespace Nimble {

class GetLaunchProfileRequest;

class GetLaunchProfileRequestPrivate : public NimbleRequestPrivate {

public:
    GetLaunchProfileRequestPrivate(const NimbleRequest::Action action,
                                   GetLaunchProfileRequest * const q);
    GetLaunchProfileRequestPrivate(const GetLaunchProfileRequestPrivate &other,
                                   GetLaunchProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLaunchProfileRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
