// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTUDIOCOMPONENTREQUEST_P_H
#define QTAWS_UPDATESTUDIOCOMPONENTREQUEST_P_H

#include "nimblerequest_p.h"
#include "updatestudiocomponentrequest.h"

namespace QtAws {
namespace Nimble {

class UpdateStudioComponentRequest;

class UpdateStudioComponentRequestPrivate : public NimbleRequestPrivate {

public:
    UpdateStudioComponentRequestPrivate(const NimbleRequest::Action action,
                                   UpdateStudioComponentRequest * const q);
    UpdateStudioComponentRequestPrivate(const UpdateStudioComponentRequestPrivate &other,
                                   UpdateStudioComponentRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateStudioComponentRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
