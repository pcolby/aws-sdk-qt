// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERULEREQUEST_P_H
#define QTAWS_CREATERULEREQUEST_P_H

#include "rbinrequest_p.h"
#include "createrulerequest.h"

namespace QtAws {
namespace Rbin {

class CreateRuleRequest;

class CreateRuleRequestPrivate : public RbinRequestPrivate {

public:
    CreateRuleRequestPrivate(const RbinRequest::Action action,
                                   CreateRuleRequest * const q);
    CreateRuleRequestPrivate(const CreateRuleRequestPrivate &other,
                                   CreateRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRuleRequest)

};

} // namespace Rbin
} // namespace QtAws

#endif
