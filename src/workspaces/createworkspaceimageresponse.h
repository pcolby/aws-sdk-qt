// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKSPACEIMAGERESPONSE_H
#define QTAWS_CREATEWORKSPACEIMAGERESPONSE_H

#include "workspacesresponse.h"
#include "createworkspaceimagerequest.h"

namespace QtAws {
namespace WorkSpaces {

class CreateWorkspaceImageResponsePrivate;

class QTAWSWORKSPACES_EXPORT CreateWorkspaceImageResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    CreateWorkspaceImageResponse(const CreateWorkspaceImageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateWorkspaceImageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWorkspaceImageResponse)
    Q_DISABLE_COPY(CreateWorkspaceImageResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
