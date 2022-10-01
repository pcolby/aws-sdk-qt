// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERULEREQUEST_P_H
#define QTAWS_CREATERULEREQUEST_P_H

#include "wafrequest_p.h"
#include "createrulerequest.h"

namespace QtAws {
namespace Waf {

class CreateRuleRequest;

class CreateRuleRequestPrivate : public WafRequestPrivate {

public:
    CreateRuleRequestPrivate(const WafRequest::Action action,
                                   CreateRuleRequest * const q);
    CreateRuleRequestPrivate(const CreateRuleRequestPrivate &other,
                                   CreateRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRuleRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
