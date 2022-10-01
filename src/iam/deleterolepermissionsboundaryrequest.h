// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROLEPERMISSIONSBOUNDARYREQUEST_H
#define QTAWS_DELETEROLEPERMISSIONSBOUNDARYREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class DeleteRolePermissionsBoundaryRequestPrivate;

class QTAWSIAM_EXPORT DeleteRolePermissionsBoundaryRequest : public IamRequest {

public:
    DeleteRolePermissionsBoundaryRequest(const DeleteRolePermissionsBoundaryRequest &other);
    DeleteRolePermissionsBoundaryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRolePermissionsBoundaryRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
