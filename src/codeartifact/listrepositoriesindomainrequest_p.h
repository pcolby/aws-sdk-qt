// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPOSITORIESINDOMAINREQUEST_P_H
#define QTAWS_LISTREPOSITORIESINDOMAINREQUEST_P_H

#include "codeartifactrequest_p.h"
#include "listrepositoriesindomainrequest.h"

namespace QtAws {
namespace CodeArtifact {

class ListRepositoriesInDomainRequest;

class ListRepositoriesInDomainRequestPrivate : public CodeArtifactRequestPrivate {

public:
    ListRepositoriesInDomainRequestPrivate(const CodeArtifactRequest::Action action,
                                   ListRepositoriesInDomainRequest * const q);
    ListRepositoriesInDomainRequestPrivate(const ListRepositoriesInDomainRequestPrivate &other,
                                   ListRepositoriesInDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRepositoriesInDomainRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
