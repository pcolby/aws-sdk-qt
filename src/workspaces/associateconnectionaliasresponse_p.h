// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECONNECTIONALIASRESPONSE_P_H
#define QTAWS_ASSOCIATECONNECTIONALIASRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class AssociateConnectionAliasResponse;

class AssociateConnectionAliasResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit AssociateConnectionAliasResponsePrivate(AssociateConnectionAliasResponse * const q);

    void parseAssociateConnectionAliasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateConnectionAliasResponse)
    Q_DISABLE_COPY(AssociateConnectionAliasResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
