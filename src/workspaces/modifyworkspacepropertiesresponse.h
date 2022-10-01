// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYWORKSPACEPROPERTIESRESPONSE_H
#define QTAWS_MODIFYWORKSPACEPROPERTIESRESPONSE_H

#include "workspacesresponse.h"
#include "modifyworkspacepropertiesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class ModifyWorkspacePropertiesResponsePrivate;

class QTAWSWORKSPACES_EXPORT ModifyWorkspacePropertiesResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    ModifyWorkspacePropertiesResponse(const ModifyWorkspacePropertiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyWorkspacePropertiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyWorkspacePropertiesResponse)
    Q_DISABLE_COPY(ModifyWorkspacePropertiesResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
