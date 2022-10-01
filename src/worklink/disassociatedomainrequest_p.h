// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEDOMAINREQUEST_P_H
#define QTAWS_DISASSOCIATEDOMAINREQUEST_P_H

#include "worklinkrequest_p.h"
#include "disassociatedomainrequest.h"

namespace QtAws {
namespace WorkLink {

class DisassociateDomainRequest;

class DisassociateDomainRequestPrivate : public WorkLinkRequestPrivate {

public:
    DisassociateDomainRequestPrivate(const WorkLinkRequest::Action action,
                                   DisassociateDomainRequest * const q);
    DisassociateDomainRequestPrivate(const DisassociateDomainRequestPrivate &other,
                                   DisassociateDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateDomainRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
