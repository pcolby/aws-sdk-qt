// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEWEBACLREQUEST_P_H
#define QTAWS_DISASSOCIATEWEBACLREQUEST_P_H

#include "wafv2request_p.h"
#include "disassociatewebaclrequest.h"

namespace QtAws {
namespace Wafv2 {

class DisassociateWebACLRequest;

class DisassociateWebACLRequestPrivate : public Wafv2RequestPrivate {

public:
    DisassociateWebACLRequestPrivate(const Wafv2Request::Action action,
                                   DisassociateWebACLRequest * const q);
    DisassociateWebACLRequestPrivate(const DisassociateWebACLRequestPrivate &other,
                                   DisassociateWebACLRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateWebACLRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
