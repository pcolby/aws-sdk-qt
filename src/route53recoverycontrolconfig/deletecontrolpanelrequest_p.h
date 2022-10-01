// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTROLPANELREQUEST_P_H
#define QTAWS_DELETECONTROLPANELREQUEST_P_H

#include "route53recoverycontrolconfigrequest_p.h"
#include "deletecontrolpanelrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class DeleteControlPanelRequest;

class DeleteControlPanelRequestPrivate : public Route53RecoveryControlConfigRequestPrivate {

public:
    DeleteControlPanelRequestPrivate(const Route53RecoveryControlConfigRequest::Action action,
                                   DeleteControlPanelRequest * const q);
    DeleteControlPanelRequestPrivate(const DeleteControlPanelRequestPrivate &other,
                                   DeleteControlPanelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteControlPanelRequest)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
