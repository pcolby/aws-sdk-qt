// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKSPACEIMAGERESPONSE_H
#define QTAWS_DELETEWORKSPACEIMAGERESPONSE_H

#include "workspacesresponse.h"
#include "deleteworkspaceimagerequest.h"

namespace QtAws {
namespace WorkSpaces {

class DeleteWorkspaceImageResponsePrivate;

class QTAWSWORKSPACES_EXPORT DeleteWorkspaceImageResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    DeleteWorkspaceImageResponse(const DeleteWorkspaceImageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteWorkspaceImageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWorkspaceImageResponse)
    Q_DISABLE_COPY(DeleteWorkspaceImageResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
