// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERWORKSPACEDIRECTORYREQUEST_H
#define QTAWS_DEREGISTERWORKSPACEDIRECTORYREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DeregisterWorkspaceDirectoryRequestPrivate;

class QTAWSWORKSPACES_EXPORT DeregisterWorkspaceDirectoryRequest : public WorkSpacesRequest {

public:
    DeregisterWorkspaceDirectoryRequest(const DeregisterWorkspaceDirectoryRequest &other);
    DeregisterWorkspaceDirectoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterWorkspaceDirectoryRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
