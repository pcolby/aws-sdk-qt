// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREDOMAINACCESSREQUEST_P_H
#define QTAWS_RESTOREDOMAINACCESSREQUEST_P_H

#include "worklinkrequest_p.h"
#include "restoredomainaccessrequest.h"

namespace QtAws {
namespace WorkLink {

class RestoreDomainAccessRequest;

class RestoreDomainAccessRequestPrivate : public WorkLinkRequestPrivate {

public:
    RestoreDomainAccessRequestPrivate(const WorkLinkRequest::Action action,
                                   RestoreDomainAccessRequest * const q);
    RestoreDomainAccessRequestPrivate(const RestoreDomainAccessRequestPrivate &other,
                                   RestoreDomainAccessRequest * const q);

private:
    Q_DECLARE_PUBLIC(RestoreDomainAccessRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
