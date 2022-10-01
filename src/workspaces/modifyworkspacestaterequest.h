// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYWORKSPACESTATEREQUEST_H
#define QTAWS_MODIFYWORKSPACESTATEREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class ModifyWorkspaceStateRequestPrivate;

class QTAWSWORKSPACES_EXPORT ModifyWorkspaceStateRequest : public WorkSpacesRequest {

public:
    ModifyWorkspaceStateRequest(const ModifyWorkspaceStateRequest &other);
    ModifyWorkspaceStateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyWorkspaceStateRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
