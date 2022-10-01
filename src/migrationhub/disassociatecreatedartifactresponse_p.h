// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECREATEDARTIFACTRESPONSE_P_H
#define QTAWS_DISASSOCIATECREATEDARTIFACTRESPONSE_P_H

#include "migrationhubresponse_p.h"

namespace QtAws {
namespace MigrationHub {

class DisassociateCreatedArtifactResponse;

class DisassociateCreatedArtifactResponsePrivate : public MigrationHubResponsePrivate {

public:

    explicit DisassociateCreatedArtifactResponsePrivate(DisassociateCreatedArtifactResponse * const q);

    void parseDisassociateCreatedArtifactResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateCreatedArtifactResponse)
    Q_DISABLE_COPY(DisassociateCreatedArtifactResponsePrivate)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
