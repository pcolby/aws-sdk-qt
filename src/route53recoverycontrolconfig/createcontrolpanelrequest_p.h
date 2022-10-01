// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTROLPANELREQUEST_P_H
#define QTAWS_CREATECONTROLPANELREQUEST_P_H

#include "route53recoverycontrolconfigrequest_p.h"
#include "createcontrolpanelrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class CreateControlPanelRequest;

class CreateControlPanelRequestPrivate : public Route53RecoveryControlConfigRequestPrivate {

public:
    CreateControlPanelRequestPrivate(const Route53RecoveryControlConfigRequest::Action action,
                                   CreateControlPanelRequest * const q);
    CreateControlPanelRequestPrivate(const CreateControlPanelRequestPrivate &other,
                                   CreateControlPanelRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateControlPanelRequest)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
