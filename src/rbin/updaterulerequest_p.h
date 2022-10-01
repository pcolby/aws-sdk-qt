// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERULEREQUEST_P_H
#define QTAWS_UPDATERULEREQUEST_P_H

#include "rbinrequest_p.h"
#include "updaterulerequest.h"

namespace QtAws {
namespace Rbin {

class UpdateRuleRequest;

class UpdateRuleRequestPrivate : public RbinRequestPrivate {

public:
    UpdateRuleRequestPrivate(const RbinRequest::Action action,
                                   UpdateRuleRequest * const q);
    UpdateRuleRequestPrivate(const UpdateRuleRequestPrivate &other,
                                   UpdateRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRuleRequest)

};

} // namespace Rbin
} // namespace QtAws

#endif
