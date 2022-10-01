// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEEXTERNALCONNECTIONREQUEST_H
#define QTAWS_DISASSOCIATEEXTERNALCONNECTIONREQUEST_H

#include "codeartifactrequest.h"

namespace QtAws {
namespace CodeArtifact {

class DisassociateExternalConnectionRequestPrivate;

class QTAWSCODEARTIFACT_EXPORT DisassociateExternalConnectionRequest : public CodeArtifactRequest {

public:
    DisassociateExternalConnectionRequest(const DisassociateExternalConnectionRequest &other);
    DisassociateExternalConnectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateExternalConnectionRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
