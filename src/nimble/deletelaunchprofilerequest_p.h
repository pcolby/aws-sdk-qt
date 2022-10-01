// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELAUNCHPROFILEREQUEST_P_H
#define QTAWS_DELETELAUNCHPROFILEREQUEST_P_H

#include "nimblerequest_p.h"
#include "deletelaunchprofilerequest.h"

namespace QtAws {
namespace Nimble {

class DeleteLaunchProfileRequest;

class DeleteLaunchProfileRequestPrivate : public NimbleRequestPrivate {

public:
    DeleteLaunchProfileRequestPrivate(const NimbleRequest::Action action,
                                   DeleteLaunchProfileRequest * const q);
    DeleteLaunchProfileRequestPrivate(const DeleteLaunchProfileRequestPrivate &other,
                                   DeleteLaunchProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLaunchProfileRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
