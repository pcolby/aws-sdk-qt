// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECONNECTIONALIASRESPONSE_P_H
#define QTAWS_DISASSOCIATECONNECTIONALIASRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class DisassociateConnectionAliasResponse;

class DisassociateConnectionAliasResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit DisassociateConnectionAliasResponsePrivate(DisassociateConnectionAliasResponse * const q);

    void parseDisassociateConnectionAliasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateConnectionAliasResponse)
    Q_DISABLE_COPY(DisassociateConnectionAliasResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
