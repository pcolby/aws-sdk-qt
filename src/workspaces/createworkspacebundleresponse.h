// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKSPACEBUNDLERESPONSE_H
#define QTAWS_CREATEWORKSPACEBUNDLERESPONSE_H

#include "workspacesresponse.h"
#include "createworkspacebundlerequest.h"

namespace QtAws {
namespace WorkSpaces {

class CreateWorkspaceBundleResponsePrivate;

class QTAWSWORKSPACES_EXPORT CreateWorkspaceBundleResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    CreateWorkspaceBundleResponse(const CreateWorkspaceBundleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateWorkspaceBundleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWorkspaceBundleResponse)
    Q_DISABLE_COPY(CreateWorkspaceBundleResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
