// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONNECTIONALIASRESPONSE_P_H
#define QTAWS_DELETECONNECTIONALIASRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class DeleteConnectionAliasResponse;

class DeleteConnectionAliasResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit DeleteConnectionAliasResponsePrivate(DeleteConnectionAliasResponse * const q);

    void parseDeleteConnectionAliasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteConnectionAliasResponse)
    Q_DISABLE_COPY(DeleteConnectionAliasResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
