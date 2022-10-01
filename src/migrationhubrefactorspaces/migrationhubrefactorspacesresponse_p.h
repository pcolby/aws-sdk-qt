// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MIGRATIONHUBREFACTORSPACESRESPONSE_P_H
#define QTAWS_MIGRATIONHUBREFACTORSPACESRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class MigrationHubRefactorSpacesResponse;

class MigrationHubRefactorSpacesResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit MigrationHubRefactorSpacesResponsePrivate(MigrationHubRefactorSpacesResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(MigrationHubRefactorSpacesResponse)
    Q_DISABLE_COPY(MigrationHubRefactorSpacesResponsePrivate)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
