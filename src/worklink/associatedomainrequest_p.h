// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDOMAINREQUEST_P_H
#define QTAWS_ASSOCIATEDOMAINREQUEST_P_H

#include "worklinkrequest_p.h"
#include "associatedomainrequest.h"

namespace QtAws {
namespace WorkLink {

class AssociateDomainRequest;

class AssociateDomainRequestPrivate : public WorkLinkRequestPrivate {

public:
    AssociateDomainRequestPrivate(const WorkLinkRequest::Action action,
                                   AssociateDomainRequest * const q);
    AssociateDomainRequestPrivate(const AssociateDomainRequestPrivate &other,
                                   AssociateDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateDomainRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
