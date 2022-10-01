// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYWORKSPACESTATERESPONSE_H
#define QTAWS_MODIFYWORKSPACESTATERESPONSE_H

#include "workspacesresponse.h"
#include "modifyworkspacestaterequest.h"

namespace QtAws {
namespace WorkSpaces {

class ModifyWorkspaceStateResponsePrivate;

class QTAWSWORKSPACES_EXPORT ModifyWorkspaceStateResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    ModifyWorkspaceStateResponse(const ModifyWorkspaceStateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyWorkspaceStateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyWorkspaceStateResponse)
    Q_DISABLE_COPY(ModifyWorkspaceStateResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
