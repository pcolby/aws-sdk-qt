// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOMAINREQUEST_P_H
#define QTAWS_DELETEDOMAINREQUEST_P_H

#include "codeartifactrequest_p.h"
#include "deletedomainrequest.h"

namespace QtAws {
namespace CodeArtifact {

class DeleteDomainRequest;

class DeleteDomainRequestPrivate : public CodeArtifactRequestPrivate {

public:
    DeleteDomainRequestPrivate(const CodeArtifactRequest::Action action,
                                   DeleteDomainRequest * const q);
    DeleteDomainRequestPrivate(const DeleteDomainRequestPrivate &other,
                                   DeleteDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDomainRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
