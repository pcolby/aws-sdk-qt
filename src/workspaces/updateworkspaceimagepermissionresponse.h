// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKSPACEIMAGEPERMISSIONRESPONSE_H
#define QTAWS_UPDATEWORKSPACEIMAGEPERMISSIONRESPONSE_H

#include "workspacesresponse.h"
#include "updateworkspaceimagepermissionrequest.h"

namespace QtAws {
namespace WorkSpaces {

class UpdateWorkspaceImagePermissionResponsePrivate;

class QTAWSWORKSPACES_EXPORT UpdateWorkspaceImagePermissionResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    UpdateWorkspaceImagePermissionResponse(const UpdateWorkspaceImagePermissionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateWorkspaceImagePermissionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateWorkspaceImagePermissionResponse)
    Q_DISABLE_COPY(UpdateWorkspaceImagePermissionResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
