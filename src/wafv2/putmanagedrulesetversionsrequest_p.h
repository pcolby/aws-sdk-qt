// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMANAGEDRULESETVERSIONSREQUEST_P_H
#define QTAWS_PUTMANAGEDRULESETVERSIONSREQUEST_P_H

#include "wafv2request_p.h"
#include "putmanagedrulesetversionsrequest.h"

namespace QtAws {
namespace Wafv2 {

class PutManagedRuleSetVersionsRequest;

class PutManagedRuleSetVersionsRequestPrivate : public Wafv2RequestPrivate {

public:
    PutManagedRuleSetVersionsRequestPrivate(const Wafv2Request::Action action,
                                   PutManagedRuleSetVersionsRequest * const q);
    PutManagedRuleSetVersionsRequestPrivate(const PutManagedRuleSetVersionsRequestPrivate &other,
                                   PutManagedRuleSetVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutManagedRuleSetVersionsRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
