// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACTIONTARGETREQUEST_P_H
#define QTAWS_CREATEACTIONTARGETREQUEST_P_H

#include "securityhubrequest_p.h"
#include "createactiontargetrequest.h"

namespace QtAws {
namespace SecurityHub {

class CreateActionTargetRequest;

class CreateActionTargetRequestPrivate : public SecurityHubRequestPrivate {

public:
    CreateActionTargetRequestPrivate(const SecurityHubRequest::Action action,
                                   CreateActionTargetRequest * const q);
    CreateActionTargetRequestPrivate(const CreateActionTargetRequestPrivate &other,
                                   CreateActionTargetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateActionTargetRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
