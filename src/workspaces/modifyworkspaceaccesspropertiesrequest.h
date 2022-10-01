// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYWORKSPACEACCESSPROPERTIESREQUEST_H
#define QTAWS_MODIFYWORKSPACEACCESSPROPERTIESREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class ModifyWorkspaceAccessPropertiesRequestPrivate;

class QTAWSWORKSPACES_EXPORT ModifyWorkspaceAccessPropertiesRequest : public WorkSpacesRequest {

public:
    ModifyWorkspaceAccessPropertiesRequest(const ModifyWorkspaceAccessPropertiesRequest &other);
    ModifyWorkspaceAccessPropertiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyWorkspaceAccessPropertiesRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
