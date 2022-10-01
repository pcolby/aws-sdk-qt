// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKEDOMAINACCESSREQUEST_P_H
#define QTAWS_REVOKEDOMAINACCESSREQUEST_P_H

#include "worklinkrequest_p.h"
#include "revokedomainaccessrequest.h"

namespace QtAws {
namespace WorkLink {

class RevokeDomainAccessRequest;

class RevokeDomainAccessRequestPrivate : public WorkLinkRequestPrivate {

public:
    RevokeDomainAccessRequestPrivate(const WorkLinkRequest::Action action,
                                   RevokeDomainAccessRequest * const q);
    RevokeDomainAccessRequestPrivate(const RevokeDomainAccessRequestPrivate &other,
                                   RevokeDomainAccessRequest * const q);

private:
    Q_DECLARE_PUBLIC(RevokeDomainAccessRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
