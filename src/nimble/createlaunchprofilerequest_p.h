// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELAUNCHPROFILEREQUEST_P_H
#define QTAWS_CREATELAUNCHPROFILEREQUEST_P_H

#include "nimblerequest_p.h"
#include "createlaunchprofilerequest.h"

namespace QtAws {
namespace Nimble {

class CreateLaunchProfileRequest;

class CreateLaunchProfileRequestPrivate : public NimbleRequestPrivate {

public:
    CreateLaunchProfileRequestPrivate(const NimbleRequest::Action action,
                                   CreateLaunchProfileRequest * const q);
    CreateLaunchProfileRequestPrivate(const CreateLaunchProfileRequestPrivate &other,
                                   CreateLaunchProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLaunchProfileRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
