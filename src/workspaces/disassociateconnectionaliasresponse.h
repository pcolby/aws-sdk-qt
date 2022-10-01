// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECONNECTIONALIASRESPONSE_H
#define QTAWS_DISASSOCIATECONNECTIONALIASRESPONSE_H

#include "workspacesresponse.h"
#include "disassociateconnectionaliasrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DisassociateConnectionAliasResponsePrivate;

class QTAWSWORKSPACES_EXPORT DisassociateConnectionAliasResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    DisassociateConnectionAliasResponse(const DisassociateConnectionAliasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateConnectionAliasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateConnectionAliasResponse)
    Q_DISABLE_COPY(DisassociateConnectionAliasResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
