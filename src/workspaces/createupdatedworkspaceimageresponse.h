// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUPDATEDWORKSPACEIMAGERESPONSE_H
#define QTAWS_CREATEUPDATEDWORKSPACEIMAGERESPONSE_H

#include "workspacesresponse.h"
#include "createupdatedworkspaceimagerequest.h"

namespace QtAws {
namespace WorkSpaces {

class CreateUpdatedWorkspaceImageResponsePrivate;

class QTAWSWORKSPACES_EXPORT CreateUpdatedWorkspaceImageResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    CreateUpdatedWorkspaceImageResponse(const CreateUpdatedWorkspaceImageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateUpdatedWorkspaceImageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUpdatedWorkspaceImageResponse)
    Q_DISABLE_COPY(CreateUpdatedWorkspaceImageResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
