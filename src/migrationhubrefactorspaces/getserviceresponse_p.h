// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICERESPONSE_P_H
#define QTAWS_GETSERVICERESPONSE_P_H

#include "migrationhubrefactorspacesresponse_p.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class GetServiceResponse;

class GetServiceResponsePrivate : public MigrationHubRefactorSpacesResponsePrivate {

public:

    explicit GetServiceResponsePrivate(GetServiceResponse * const q);

    void parseGetServiceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetServiceResponse)
    Q_DISABLE_COPY(GetServiceResponsePrivate)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
