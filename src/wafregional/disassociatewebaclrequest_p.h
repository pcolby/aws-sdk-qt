// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEWEBACLREQUEST_P_H
#define QTAWS_DISASSOCIATEWEBACLREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "disassociatewebaclrequest.h"

namespace QtAws {
namespace WafRegional {

class DisassociateWebACLRequest;

class DisassociateWebACLRequestPrivate : public WafRegionalRequestPrivate {

public:
    DisassociateWebACLRequestPrivate(const WafRegionalRequest::Action action,
                                   DisassociateWebACLRequest * const q);
    DisassociateWebACLRequestPrivate(const DisassociateWebACLRequestPrivate &other,
                                   DisassociateWebACLRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateWebACLRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
