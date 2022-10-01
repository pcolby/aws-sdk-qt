// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECONNECTIONALIASRESPONSE_H
#define QTAWS_ASSOCIATECONNECTIONALIASRESPONSE_H

#include "workspacesresponse.h"
#include "associateconnectionaliasrequest.h"

namespace QtAws {
namespace WorkSpaces {

class AssociateConnectionAliasResponsePrivate;

class QTAWSWORKSPACES_EXPORT AssociateConnectionAliasResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    AssociateConnectionAliasResponse(const AssociateConnectionAliasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateConnectionAliasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateConnectionAliasResponse)
    Q_DISABLE_COPY(AssociateConnectionAliasResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
