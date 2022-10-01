// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACTIONTARGETREQUEST_P_H
#define QTAWS_UPDATEACTIONTARGETREQUEST_P_H

#include "securityhubrequest_p.h"
#include "updateactiontargetrequest.h"

namespace QtAws {
namespace SecurityHub {

class UpdateActionTargetRequest;

class UpdateActionTargetRequestPrivate : public SecurityHubRequestPrivate {

public:
    UpdateActionTargetRequestPrivate(const SecurityHubRequest::Action action,
                                   UpdateActionTargetRequest * const q);
    UpdateActionTargetRequestPrivate(const UpdateActionTargetRequestPrivate &other,
                                   UpdateActionTargetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateActionTargetRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
