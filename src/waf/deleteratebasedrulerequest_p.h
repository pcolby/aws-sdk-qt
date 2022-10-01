// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERATEBASEDRULEREQUEST_P_H
#define QTAWS_DELETERATEBASEDRULEREQUEST_P_H

#include "wafrequest_p.h"
#include "deleteratebasedrulerequest.h"

namespace QtAws {
namespace Waf {

class DeleteRateBasedRuleRequest;

class DeleteRateBasedRuleRequestPrivate : public WafRequestPrivate {

public:
    DeleteRateBasedRuleRequestPrivate(const WafRequest::Action action,
                                   DeleteRateBasedRuleRequest * const q);
    DeleteRateBasedRuleRequestPrivate(const DeleteRateBasedRuleRequestPrivate &other,
                                   DeleteRateBasedRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRateBasedRuleRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
