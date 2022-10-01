// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCEPOLICYRESPONSE_P_H
#define QTAWS_DELETERESOURCEPOLICYRESPONSE_P_H

#include "migrationhubrefactorspacesresponse_p.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class DeleteResourcePolicyResponse;

class DeleteResourcePolicyResponsePrivate : public MigrationHubRefactorSpacesResponsePrivate {

public:

    explicit DeleteResourcePolicyResponsePrivate(DeleteResourcePolicyResponse * const q);

    void parseDeleteResourcePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteResourcePolicyResponse)
    Q_DISABLE_COPY(DeleteResourcePolicyResponsePrivate)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
