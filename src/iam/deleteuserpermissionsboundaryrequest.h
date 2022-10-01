// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERPERMISSIONSBOUNDARYREQUEST_H
#define QTAWS_DELETEUSERPERMISSIONSBOUNDARYREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class DeleteUserPermissionsBoundaryRequestPrivate;

class QTAWSIAM_EXPORT DeleteUserPermissionsBoundaryRequest : public IamRequest {

public:
    DeleteUserPermissionsBoundaryRequest(const DeleteUserPermissionsBoundaryRequest &other);
    DeleteUserPermissionsBoundaryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUserPermissionsBoundaryRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
