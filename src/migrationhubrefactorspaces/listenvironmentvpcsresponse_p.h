// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENVIRONMENTVPCSRESPONSE_P_H
#define QTAWS_LISTENVIRONMENTVPCSRESPONSE_P_H

#include "migrationhubrefactorspacesresponse_p.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class ListEnvironmentVpcsResponse;

class ListEnvironmentVpcsResponsePrivate : public MigrationHubRefactorSpacesResponsePrivate {

public:

    explicit ListEnvironmentVpcsResponsePrivate(ListEnvironmentVpcsResponse * const q);

    void parseListEnvironmentVpcsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEnvironmentVpcsResponse)
    Q_DISABLE_COPY(ListEnvironmentVpcsResponsePrivate)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
