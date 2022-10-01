// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYWORKSPACECREATIONPROPERTIESRESPONSE_H
#define QTAWS_MODIFYWORKSPACECREATIONPROPERTIESRESPONSE_H

#include "workspacesresponse.h"
#include "modifyworkspacecreationpropertiesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class ModifyWorkspaceCreationPropertiesResponsePrivate;

class QTAWSWORKSPACES_EXPORT ModifyWorkspaceCreationPropertiesResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    ModifyWorkspaceCreationPropertiesResponse(const ModifyWorkspaceCreationPropertiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyWorkspaceCreationPropertiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyWorkspaceCreationPropertiesResponse)
    Q_DISABLE_COPY(ModifyWorkspaceCreationPropertiesResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
