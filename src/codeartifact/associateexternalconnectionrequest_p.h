// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEEXTERNALCONNECTIONREQUEST_P_H
#define QTAWS_ASSOCIATEEXTERNALCONNECTIONREQUEST_P_H

#include "codeartifactrequest_p.h"
#include "associateexternalconnectionrequest.h"

namespace QtAws {
namespace CodeArtifact {

class AssociateExternalConnectionRequest;

class AssociateExternalConnectionRequestPrivate : public CodeArtifactRequestPrivate {

public:
    AssociateExternalConnectionRequestPrivate(const CodeArtifactRequest::Action action,
                                   AssociateExternalConnectionRequest * const q);
    AssociateExternalConnectionRequestPrivate(const AssociateExternalConnectionRequestPrivate &other,
                                   AssociateExternalConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateExternalConnectionRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
