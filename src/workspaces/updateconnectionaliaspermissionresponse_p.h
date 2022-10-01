// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONNECTIONALIASPERMISSIONRESPONSE_P_H
#define QTAWS_UPDATECONNECTIONALIASPERMISSIONRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class UpdateConnectionAliasPermissionResponse;

class UpdateConnectionAliasPermissionResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit UpdateConnectionAliasPermissionResponsePrivate(UpdateConnectionAliasPermissionResponse * const q);

    void parseUpdateConnectionAliasPermissionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateConnectionAliasPermissionResponse)
    Q_DISABLE_COPY(UpdateConnectionAliasPermissionResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
