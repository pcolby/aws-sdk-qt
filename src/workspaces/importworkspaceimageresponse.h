// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTWORKSPACEIMAGERESPONSE_H
#define QTAWS_IMPORTWORKSPACEIMAGERESPONSE_H

#include "workspacesresponse.h"
#include "importworkspaceimagerequest.h"

namespace QtAws {
namespace WorkSpaces {

class ImportWorkspaceImageResponsePrivate;

class QTAWSWORKSPACES_EXPORT ImportWorkspaceImageResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    ImportWorkspaceImageResponse(const ImportWorkspaceImageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ImportWorkspaceImageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportWorkspaceImageResponse)
    Q_DISABLE_COPY(ImportWorkspaceImageResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
