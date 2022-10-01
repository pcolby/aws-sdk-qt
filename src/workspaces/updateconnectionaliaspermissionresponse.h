// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONNECTIONALIASPERMISSIONRESPONSE_H
#define QTAWS_UPDATECONNECTIONALIASPERMISSIONRESPONSE_H

#include "workspacesresponse.h"
#include "updateconnectionaliaspermissionrequest.h"

namespace QtAws {
namespace WorkSpaces {

class UpdateConnectionAliasPermissionResponsePrivate;

class QTAWSWORKSPACES_EXPORT UpdateConnectionAliasPermissionResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    UpdateConnectionAliasPermissionResponse(const UpdateConnectionAliasPermissionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateConnectionAliasPermissionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateConnectionAliasPermissionResponse)
    Q_DISABLE_COPY(UpdateConnectionAliasPermissionResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
