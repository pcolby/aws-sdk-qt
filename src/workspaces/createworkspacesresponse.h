// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKSPACESRESPONSE_H
#define QTAWS_CREATEWORKSPACESRESPONSE_H

#include "workspacesresponse.h"
#include "createworkspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class CreateWorkspacesResponsePrivate;

class QTAWSWORKSPACES_EXPORT CreateWorkspacesResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    CreateWorkspacesResponse(const CreateWorkspacesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateWorkspacesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWorkspacesResponse)
    Q_DISABLE_COPY(CreateWorkspacesResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
