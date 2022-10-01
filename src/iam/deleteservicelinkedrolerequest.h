// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVICELINKEDROLEREQUEST_H
#define QTAWS_DELETESERVICELINKEDROLEREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class DeleteServiceLinkedRoleRequestPrivate;

class QTAWSIAM_EXPORT DeleteServiceLinkedRoleRequest : public IamRequest {

public:
    DeleteServiceLinkedRoleRequest(const DeleteServiceLinkedRoleRequest &other);
    DeleteServiceLinkedRoleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteServiceLinkedRoleRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
