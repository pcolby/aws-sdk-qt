// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERWORKSPACEDIRECTORYREQUEST_H
#define QTAWS_REGISTERWORKSPACEDIRECTORYREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class RegisterWorkspaceDirectoryRequestPrivate;

class QTAWSWORKSPACES_EXPORT RegisterWorkspaceDirectoryRequest : public WorkSpacesRequest {

public:
    RegisterWorkspaceDirectoryRequest(const RegisterWorkspaceDirectoryRequest &other);
    RegisterWorkspaceDirectoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterWorkspaceDirectoryRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
