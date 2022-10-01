// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACTIONTARGETREQUEST_P_H
#define QTAWS_DELETEACTIONTARGETREQUEST_P_H

#include "securityhubrequest_p.h"
#include "deleteactiontargetrequest.h"

namespace QtAws {
namespace SecurityHub {

class DeleteActionTargetRequest;

class DeleteActionTargetRequestPrivate : public SecurityHubRequestPrivate {

public:
    DeleteActionTargetRequestPrivate(const SecurityHubRequest::Action action,
                                   DeleteActionTargetRequest * const q);
    DeleteActionTargetRequestPrivate(const DeleteActionTargetRequestPrivate &other,
                                   DeleteActionTargetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteActionTargetRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
