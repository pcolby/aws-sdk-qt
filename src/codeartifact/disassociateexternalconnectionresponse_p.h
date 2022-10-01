// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEEXTERNALCONNECTIONRESPONSE_P_H
#define QTAWS_DISASSOCIATEEXTERNALCONNECTIONRESPONSE_P_H

#include "codeartifactresponse_p.h"

namespace QtAws {
namespace CodeArtifact {

class DisassociateExternalConnectionResponse;

class DisassociateExternalConnectionResponsePrivate : public CodeArtifactResponsePrivate {

public:

    explicit DisassociateExternalConnectionResponsePrivate(DisassociateExternalConnectionResponse * const q);

    void parseDisassociateExternalConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateExternalConnectionResponse)
    Q_DISABLE_COPY(DisassociateExternalConnectionResponsePrivate)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
