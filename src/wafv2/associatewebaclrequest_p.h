// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEWEBACLREQUEST_P_H
#define QTAWS_ASSOCIATEWEBACLREQUEST_P_H

#include "wafv2request_p.h"
#include "associatewebaclrequest.h"

namespace QtAws {
namespace Wafv2 {

class AssociateWebACLRequest;

class AssociateWebACLRequestPrivate : public Wafv2RequestPrivate {

public:
    AssociateWebACLRequestPrivate(const Wafv2Request::Action action,
                                   AssociateWebACLRequest * const q);
    AssociateWebACLRequestPrivate(const AssociateWebACLRequestPrivate &other,
                                   AssociateWebACLRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateWebACLRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
