// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSTUDIOSSOCONFIGURATIONREPAIRREQUEST_P_H
#define QTAWS_STARTSTUDIOSSOCONFIGURATIONREPAIRREQUEST_P_H

#include "nimblerequest_p.h"
#include "startstudiossoconfigurationrepairrequest.h"

namespace QtAws {
namespace Nimble {

class StartStudioSSOConfigurationRepairRequest;

class StartStudioSSOConfigurationRepairRequestPrivate : public NimbleRequestPrivate {

public:
    StartStudioSSOConfigurationRepairRequestPrivate(const NimbleRequest::Action action,
                                   StartStudioSSOConfigurationRepairRequest * const q);
    StartStudioSSOConfigurationRepairRequestPrivate(const StartStudioSSOConfigurationRepairRequestPrivate &other,
                                   StartStudioSSOConfigurationRepairRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartStudioSSOConfigurationRepairRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
