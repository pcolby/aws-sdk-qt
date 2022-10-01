// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCREATEDARTIFACTSRESPONSE_P_H
#define QTAWS_LISTCREATEDARTIFACTSRESPONSE_P_H

#include "migrationhubresponse_p.h"

namespace QtAws {
namespace MigrationHub {

class ListCreatedArtifactsResponse;

class ListCreatedArtifactsResponsePrivate : public MigrationHubResponsePrivate {

public:

    explicit ListCreatedArtifactsResponsePrivate(ListCreatedArtifactsResponse * const q);

    void parseListCreatedArtifactsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCreatedArtifactsResponse)
    Q_DISABLE_COPY(ListCreatedArtifactsResponsePrivate)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
