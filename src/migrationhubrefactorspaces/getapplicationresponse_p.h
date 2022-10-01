// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLICATIONRESPONSE_P_H
#define QTAWS_GETAPPLICATIONRESPONSE_P_H

#include "migrationhubrefactorspacesresponse_p.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class GetApplicationResponse;

class GetApplicationResponsePrivate : public MigrationHubRefactorSpacesResponsePrivate {

public:

    explicit GetApplicationResponsePrivate(GetApplicationResponse * const q);

    void parseGetApplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetApplicationResponse)
    Q_DISABLE_COPY(GetApplicationResponsePrivate)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
