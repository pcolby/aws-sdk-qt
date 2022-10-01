// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERULEREQUEST_P_H
#define QTAWS_UPDATERULEREQUEST_P_H

#include "wafrequest_p.h"
#include "updaterulerequest.h"

namespace QtAws {
namespace Waf {

class UpdateRuleRequest;

class UpdateRuleRequestPrivate : public WafRequestPrivate {

public:
    UpdateRuleRequestPrivate(const WafRequest::Action action,
                                   UpdateRuleRequest * const q);
    UpdateRuleRequestPrivate(const UpdateRuleRequestPrivate &other,
                                   UpdateRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRuleRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
