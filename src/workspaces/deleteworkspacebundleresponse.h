// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKSPACEBUNDLERESPONSE_H
#define QTAWS_DELETEWORKSPACEBUNDLERESPONSE_H

#include "workspacesresponse.h"
#include "deleteworkspacebundlerequest.h"

namespace QtAws {
namespace WorkSpaces {

class DeleteWorkspaceBundleResponsePrivate;

class QTAWSWORKSPACES_EXPORT DeleteWorkspaceBundleResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    DeleteWorkspaceBundleResponse(const DeleteWorkspaceBundleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteWorkspaceBundleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWorkspaceBundleResponse)
    Q_DISABLE_COPY(DeleteWorkspaceBundleResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
