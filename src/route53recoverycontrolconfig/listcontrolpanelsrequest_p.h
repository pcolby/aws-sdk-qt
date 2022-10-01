// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTROLPANELSREQUEST_P_H
#define QTAWS_LISTCONTROLPANELSREQUEST_P_H

#include "route53recoverycontrolconfigrequest_p.h"
#include "listcontrolpanelsrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class ListControlPanelsRequest;

class ListControlPanelsRequestPrivate : public Route53RecoveryControlConfigRequestPrivate {

public:
    ListControlPanelsRequestPrivate(const Route53RecoveryControlConfigRequest::Action action,
                                   ListControlPanelsRequest * const q);
    ListControlPanelsRequestPrivate(const ListControlPanelsRequestPrivate &other,
                                   ListControlPanelsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListControlPanelsRequest)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
