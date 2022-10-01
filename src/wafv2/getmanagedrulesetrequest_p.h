// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMANAGEDRULESETREQUEST_P_H
#define QTAWS_GETMANAGEDRULESETREQUEST_P_H

#include "wafv2request_p.h"
#include "getmanagedrulesetrequest.h"

namespace QtAws {
namespace Wafv2 {

class GetManagedRuleSetRequest;

class GetManagedRuleSetRequestPrivate : public Wafv2RequestPrivate {

public:
    GetManagedRuleSetRequestPrivate(const Wafv2Request::Action action,
                                   GetManagedRuleSetRequest * const q);
    GetManagedRuleSetRequestPrivate(const GetManagedRuleSetRequestPrivate &other,
                                   GetManagedRuleSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetManagedRuleSetRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
