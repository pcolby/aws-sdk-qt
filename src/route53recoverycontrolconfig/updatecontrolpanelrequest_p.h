// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTROLPANELREQUEST_P_H
#define QTAWS_UPDATECONTROLPANELREQUEST_P_H

#include "route53recoverycontrolconfigrequest_p.h"
#include "updatecontrolpanelrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class UpdateControlPanelRequest;

class UpdateControlPanelRequestPrivate : public Route53RecoveryControlConfigRequestPrivate {

public:
    UpdateControlPanelRequestPrivate(const Route53RecoveryControlConfigRequest::Action action,
                                   UpdateControlPanelRequest * const q);
    UpdateControlPanelRequestPrivate(const UpdateControlPanelRequestPrivate &other,
                                   UpdateControlPanelRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateControlPanelRequest)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
