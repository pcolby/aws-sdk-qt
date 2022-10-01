// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERULEGROUPREQUEST_P_H
#define QTAWS_UPDATERULEGROUPREQUEST_P_H

#include "wafv2request_p.h"
#include "updaterulegrouprequest.h"

namespace QtAws {
namespace Wafv2 {

class UpdateRuleGroupRequest;

class UpdateRuleGroupRequestPrivate : public Wafv2RequestPrivate {

public:
    UpdateRuleGroupRequestPrivate(const Wafv2Request::Action action,
                                   UpdateRuleGroupRequest * const q);
    UpdateRuleGroupRequestPrivate(const UpdateRuleGroupRequestPrivate &other,
                                   UpdateRuleGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRuleGroupRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
