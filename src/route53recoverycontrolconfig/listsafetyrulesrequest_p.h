// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSAFETYRULESREQUEST_P_H
#define QTAWS_LISTSAFETYRULESREQUEST_P_H

#include "route53recoverycontrolconfigrequest_p.h"
#include "listsafetyrulesrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class ListSafetyRulesRequest;

class ListSafetyRulesRequestPrivate : public Route53RecoveryControlConfigRequestPrivate {

public:
    ListSafetyRulesRequestPrivate(const Route53RecoveryControlConfigRequest::Action action,
                                   ListSafetyRulesRequest * const q);
    ListSafetyRulesRequestPrivate(const ListSafetyRulesRequestPrivate &other,
                                   ListSafetyRulesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSafetyRulesRequest)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
