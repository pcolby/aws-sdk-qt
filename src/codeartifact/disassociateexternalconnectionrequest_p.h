// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEEXTERNALCONNECTIONREQUEST_P_H
#define QTAWS_DISASSOCIATEEXTERNALCONNECTIONREQUEST_P_H

#include "codeartifactrequest_p.h"
#include "disassociateexternalconnectionrequest.h"

namespace QtAws {
namespace CodeArtifact {

class DisassociateExternalConnectionRequest;

class DisassociateExternalConnectionRequestPrivate : public CodeArtifactRequestPrivate {

public:
    DisassociateExternalConnectionRequestPrivate(const CodeArtifactRequest::Action action,
                                   DisassociateExternalConnectionRequest * const q);
    DisassociateExternalConnectionRequestPrivate(const DisassociateExternalConnectionRequestPrivate &other,
                                   DisassociateExternalConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateExternalConnectionRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
