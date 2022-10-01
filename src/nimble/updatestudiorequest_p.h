// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTUDIOREQUEST_P_H
#define QTAWS_UPDATESTUDIOREQUEST_P_H

#include "nimblerequest_p.h"
#include "updatestudiorequest.h"

namespace QtAws {
namespace Nimble {

class UpdateStudioRequest;

class UpdateStudioRequestPrivate : public NimbleRequestPrivate {

public:
    UpdateStudioRequestPrivate(const NimbleRequest::Action action,
                                   UpdateStudioRequest * const q);
    UpdateStudioRequestPrivate(const UpdateStudioRequestPrivate &other,
                                   UpdateStudioRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateStudioRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
