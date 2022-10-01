// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPLICATIONRESPONSE_P_H
#define QTAWS_CREATEAPPLICATIONRESPONSE_P_H

#include "migrationhubrefactorspacesresponse_p.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class CreateApplicationResponse;

class CreateApplicationResponsePrivate : public MigrationHubRefactorSpacesResponsePrivate {

public:

    explicit CreateApplicationResponsePrivate(CreateApplicationResponse * const q);

    void parseCreateApplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateApplicationResponse)
    Q_DISABLE_COPY(CreateApplicationResponsePrivate)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
