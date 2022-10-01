// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENVIRONMENTRESPONSE_P_H
#define QTAWS_GETENVIRONMENTRESPONSE_P_H

#include "migrationhubrefactorspacesresponse_p.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class GetEnvironmentResponse;

class GetEnvironmentResponsePrivate : public MigrationHubRefactorSpacesResponsePrivate {

public:

    explicit GetEnvironmentResponsePrivate(GetEnvironmentResponse * const q);

    void parseGetEnvironmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEnvironmentResponse)
    Q_DISABLE_COPY(GetEnvironmentResponsePrivate)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
