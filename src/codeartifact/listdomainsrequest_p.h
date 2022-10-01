// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOMAINSREQUEST_P_H
#define QTAWS_LISTDOMAINSREQUEST_P_H

#include "codeartifactrequest_p.h"
#include "listdomainsrequest.h"

namespace QtAws {
namespace CodeArtifact {

class ListDomainsRequest;

class ListDomainsRequestPrivate : public CodeArtifactRequestPrivate {

public:
    ListDomainsRequestPrivate(const CodeArtifactRequest::Action action,
                                   ListDomainsRequest * const q);
    ListDomainsRequestPrivate(const ListDomainsRequestPrivate &other,
                                   ListDomainsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDomainsRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
