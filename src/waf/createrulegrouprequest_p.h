// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERULEGROUPREQUEST_P_H
#define QTAWS_CREATERULEGROUPREQUEST_P_H

#include "wafrequest_p.h"
#include "createrulegrouprequest.h"

namespace QtAws {
namespace Waf {

class CreateRuleGroupRequest;

class CreateRuleGroupRequestPrivate : public WafRequestPrivate {

public:
    CreateRuleGroupRequestPrivate(const WafRequest::Action action,
                                   CreateRuleGroupRequest * const q);
    CreateRuleGroupRequestPrivate(const CreateRuleGroupRequestPrivate &other,
                                   CreateRuleGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRuleGroupRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
