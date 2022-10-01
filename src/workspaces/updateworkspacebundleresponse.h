// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKSPACEBUNDLERESPONSE_H
#define QTAWS_UPDATEWORKSPACEBUNDLERESPONSE_H

#include "workspacesresponse.h"
#include "updateworkspacebundlerequest.h"

namespace QtAws {
namespace WorkSpaces {

class UpdateWorkspaceBundleResponsePrivate;

class QTAWSWORKSPACES_EXPORT UpdateWorkspaceBundleResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    UpdateWorkspaceBundleResponse(const UpdateWorkspaceBundleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateWorkspaceBundleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateWorkspaceBundleResponse)
    Q_DISABLE_COPY(UpdateWorkspaceBundleResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
