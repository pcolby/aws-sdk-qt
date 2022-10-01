// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVICERESPONSE_P_H
#define QTAWS_DELETESERVICERESPONSE_P_H

#include "migrationhubrefactorspacesresponse_p.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class DeleteServiceResponse;

class DeleteServiceResponsePrivate : public MigrationHubRefactorSpacesResponsePrivate {

public:

    explicit DeleteServiceResponsePrivate(DeleteServiceResponse * const q);

    void parseDeleteServiceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteServiceResponse)
    Q_DISABLE_COPY(DeleteServiceResponsePrivate)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
