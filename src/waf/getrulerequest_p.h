// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRULEREQUEST_P_H
#define QTAWS_GETRULEREQUEST_P_H

#include "wafrequest_p.h"
#include "getrulerequest.h"

namespace QtAws {
namespace Waf {

class GetRuleRequest;

class GetRuleRequestPrivate : public WafRequestPrivate {

public:
    GetRuleRequestPrivate(const WafRequest::Action action,
                                   GetRuleRequest * const q);
    GetRuleRequestPrivate(const GetRuleRequestPrivate &other,
                                   GetRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRuleRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
