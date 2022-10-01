// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERULEGROUPREQUEST_P_H
#define QTAWS_UPDATERULEGROUPREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "updaterulegrouprequest.h"

namespace QtAws {
namespace WafRegional {

class UpdateRuleGroupRequest;

class UpdateRuleGroupRequestPrivate : public WafRegionalRequestPrivate {

public:
    UpdateRuleGroupRequestPrivate(const WafRegionalRequest::Action action,
                                   UpdateRuleGroupRequest * const q);
    UpdateRuleGroupRequestPrivate(const UpdateRuleGroupRequestPrivate &other,
                                   UpdateRuleGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRuleGroupRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
