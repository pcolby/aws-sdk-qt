// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAUNCHPROFILEDETAILSREQUEST_P_H
#define QTAWS_GETLAUNCHPROFILEDETAILSREQUEST_P_H

#include "nimblerequest_p.h"
#include "getlaunchprofiledetailsrequest.h"

namespace QtAws {
namespace Nimble {

class GetLaunchProfileDetailsRequest;

class GetLaunchProfileDetailsRequestPrivate : public NimbleRequestPrivate {

public:
    GetLaunchProfileDetailsRequestPrivate(const NimbleRequest::Action action,
                                   GetLaunchProfileDetailsRequest * const q);
    GetLaunchProfileDetailsRequestPrivate(const GetLaunchProfileDetailsRequestPrivate &other,
                                   GetLaunchProfileDetailsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLaunchProfileDetailsRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
