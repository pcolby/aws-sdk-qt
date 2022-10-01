// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEWEBACLREQUEST_P_H
#define QTAWS_ASSOCIATEWEBACLREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "associatewebaclrequest.h"

namespace QtAws {
namespace WafRegional {

class AssociateWebACLRequest;

class AssociateWebACLRequestPrivate : public WafRegionalRequestPrivate {

public:
    AssociateWebACLRequestPrivate(const WafRegionalRequest::Action action,
                                   AssociateWebACLRequest * const q);
    AssociateWebACLRequestPrivate(const AssociateWebACLRequestPrivate &other,
                                   AssociateWebACLRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateWebACLRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
