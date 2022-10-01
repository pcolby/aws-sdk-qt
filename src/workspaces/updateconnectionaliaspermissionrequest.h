// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONNECTIONALIASPERMISSIONREQUEST_H
#define QTAWS_UPDATECONNECTIONALIASPERMISSIONREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class UpdateConnectionAliasPermissionRequestPrivate;

class QTAWSWORKSPACES_EXPORT UpdateConnectionAliasPermissionRequest : public WorkSpacesRequest {

public:
    UpdateConnectionAliasPermissionRequest(const UpdateConnectionAliasPermissionRequest &other);
    UpdateConnectionAliasPermissionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateConnectionAliasPermissionRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
