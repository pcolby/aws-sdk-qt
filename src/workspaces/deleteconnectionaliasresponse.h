// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONNECTIONALIASRESPONSE_H
#define QTAWS_DELETECONNECTIONALIASRESPONSE_H

#include "workspacesresponse.h"
#include "deleteconnectionaliasrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DeleteConnectionAliasResponsePrivate;

class QTAWSWORKSPACES_EXPORT DeleteConnectionAliasResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    DeleteConnectionAliasResponse(const DeleteConnectionAliasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteConnectionAliasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConnectionAliasResponse)
    Q_DISABLE_COPY(DeleteConnectionAliasResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
