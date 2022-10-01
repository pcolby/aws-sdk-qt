// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERATEBASEDRULEREQUEST_P_H
#define QTAWS_DELETERATEBASEDRULEREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "deleteratebasedrulerequest.h"

namespace QtAws {
namespace WafRegional {

class DeleteRateBasedRuleRequest;

class DeleteRateBasedRuleRequestPrivate : public WafRegionalRequestPrivate {

public:
    DeleteRateBasedRuleRequestPrivate(const WafRegionalRequest::Action action,
                                   DeleteRateBasedRuleRequest * const q);
    DeleteRateBasedRuleRequestPrivate(const DeleteRateBasedRuleRequestPrivate &other,
                                   DeleteRateBasedRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRateBasedRuleRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
