// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERULEGROUPREQUEST_P_H
#define QTAWS_CREATERULEGROUPREQUEST_P_H

#include "wafv2request_p.h"
#include "createrulegrouprequest.h"

namespace QtAws {
namespace Wafv2 {

class CreateRuleGroupRequest;

class CreateRuleGroupRequestPrivate : public Wafv2RequestPrivate {

public:
    CreateRuleGroupRequestPrivate(const Wafv2Request::Action action,
                                   CreateRuleGroupRequest * const q);
    CreateRuleGroupRequestPrivate(const CreateRuleGroupRequestPrivate &other,
                                   CreateRuleGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRuleGroupRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
