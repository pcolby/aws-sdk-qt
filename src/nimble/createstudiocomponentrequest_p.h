// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTUDIOCOMPONENTREQUEST_P_H
#define QTAWS_CREATESTUDIOCOMPONENTREQUEST_P_H

#include "nimblerequest_p.h"
#include "createstudiocomponentrequest.h"

namespace QtAws {
namespace Nimble {

class CreateStudioComponentRequest;

class CreateStudioComponentRequestPrivate : public NimbleRequestPrivate {

public:
    CreateStudioComponentRequestPrivate(const NimbleRequest::Action action,
                                   CreateStudioComponentRequest * const q);
    CreateStudioComponentRequestPrivate(const CreateStudioComponentRequestPrivate &other,
                                   CreateStudioComponentRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateStudioComponentRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
