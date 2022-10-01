// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEEXTERNALCONNECTIONRESPONSE_H
#define QTAWS_DISASSOCIATEEXTERNALCONNECTIONRESPONSE_H

#include "codeartifactresponse.h"
#include "disassociateexternalconnectionrequest.h"

namespace QtAws {
namespace CodeArtifact {

class DisassociateExternalConnectionResponsePrivate;

class QTAWSCODEARTIFACT_EXPORT DisassociateExternalConnectionResponse : public CodeArtifactResponse {
    Q_OBJECT

public:
    DisassociateExternalConnectionResponse(const DisassociateExternalConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateExternalConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateExternalConnectionResponse)
    Q_DISABLE_COPY(DisassociateExternalConnectionResponse)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
