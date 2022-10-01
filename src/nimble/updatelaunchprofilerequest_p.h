// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELAUNCHPROFILEREQUEST_P_H
#define QTAWS_UPDATELAUNCHPROFILEREQUEST_P_H

#include "nimblerequest_p.h"
#include "updatelaunchprofilerequest.h"

namespace QtAws {
namespace Nimble {

class UpdateLaunchProfileRequest;

class UpdateLaunchProfileRequestPrivate : public NimbleRequestPrivate {

public:
    UpdateLaunchProfileRequestPrivate(const NimbleRequest::Action action,
                                   UpdateLaunchProfileRequest * const q);
    UpdateLaunchProfileRequestPrivate(const UpdateLaunchProfileRequestPrivate &other,
                                   UpdateLaunchProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateLaunchProfileRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
