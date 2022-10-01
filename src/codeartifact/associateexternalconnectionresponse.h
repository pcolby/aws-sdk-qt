// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEEXTERNALCONNECTIONRESPONSE_H
#define QTAWS_ASSOCIATEEXTERNALCONNECTIONRESPONSE_H

#include "codeartifactresponse.h"
#include "associateexternalconnectionrequest.h"

namespace QtAws {
namespace CodeArtifact {

class AssociateExternalConnectionResponsePrivate;

class QTAWSCODEARTIFACT_EXPORT AssociateExternalConnectionResponse : public CodeArtifactResponse {
    Q_OBJECT

public:
    AssociateExternalConnectionResponse(const AssociateExternalConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateExternalConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateExternalConnectionResponse)
    Q_DISABLE_COPY(AssociateExternalConnectionResponse)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
