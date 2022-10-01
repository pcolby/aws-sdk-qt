// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYWORKSPACEACCESSPROPERTIESRESPONSE_H
#define QTAWS_MODIFYWORKSPACEACCESSPROPERTIESRESPONSE_H

#include "workspacesresponse.h"
#include "modifyworkspaceaccesspropertiesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class ModifyWorkspaceAccessPropertiesResponsePrivate;

class QTAWSWORKSPACES_EXPORT ModifyWorkspaceAccessPropertiesResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    ModifyWorkspaceAccessPropertiesResponse(const ModifyWorkspaceAccessPropertiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyWorkspaceAccessPropertiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyWorkspaceAccessPropertiesResponse)
    Q_DISABLE_COPY(ModifyWorkspaceAccessPropertiesResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
