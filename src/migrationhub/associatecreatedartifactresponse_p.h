// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECREATEDARTIFACTRESPONSE_P_H
#define QTAWS_ASSOCIATECREATEDARTIFACTRESPONSE_P_H

#include "migrationhubresponse_p.h"

namespace QtAws {
namespace MigrationHub {

class AssociateCreatedArtifactResponse;

class AssociateCreatedArtifactResponsePrivate : public MigrationHubResponsePrivate {

public:

    explicit AssociateCreatedArtifactResponsePrivate(AssociateCreatedArtifactResponse * const q);

    void parseAssociateCreatedArtifactResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateCreatedArtifactResponse)
    Q_DISABLE_COPY(AssociateCreatedArtifactResponsePrivate)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
