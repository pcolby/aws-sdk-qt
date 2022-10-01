// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYWORKSPACEIMAGERESPONSE_H
#define QTAWS_COPYWORKSPACEIMAGERESPONSE_H

#include "workspacesresponse.h"
#include "copyworkspaceimagerequest.h"

namespace QtAws {
namespace WorkSpaces {

class CopyWorkspaceImageResponsePrivate;

class QTAWSWORKSPACES_EXPORT CopyWorkspaceImageResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    CopyWorkspaceImageResponse(const CopyWorkspaceImageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CopyWorkspaceImageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CopyWorkspaceImageResponse)
    Q_DISABLE_COPY(CopyWorkspaceImageResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
