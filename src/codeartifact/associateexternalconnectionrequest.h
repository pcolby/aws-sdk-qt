// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEEXTERNALCONNECTIONREQUEST_H
#define QTAWS_ASSOCIATEEXTERNALCONNECTIONREQUEST_H

#include "codeartifactrequest.h"

namespace QtAws {
namespace CodeArtifact {

class AssociateExternalConnectionRequestPrivate;

class QTAWSCODEARTIFACT_EXPORT AssociateExternalConnectionRequest : public CodeArtifactRequest {

public:
    AssociateExternalConnectionRequest(const AssociateExternalConnectionRequest &other);
    AssociateExternalConnectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateExternalConnectionRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
