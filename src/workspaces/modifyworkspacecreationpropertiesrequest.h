// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYWORKSPACECREATIONPROPERTIESREQUEST_H
#define QTAWS_MODIFYWORKSPACECREATIONPROPERTIESREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class ModifyWorkspaceCreationPropertiesRequestPrivate;

class QTAWSWORKSPACES_EXPORT ModifyWorkspaceCreationPropertiesRequest : public WorkSpacesRequest {

public:
    ModifyWorkspaceCreationPropertiesRequest(const ModifyWorkspaceCreationPropertiesRequest &other);
    ModifyWorkspaceCreationPropertiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyWorkspaceCreationPropertiesRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
