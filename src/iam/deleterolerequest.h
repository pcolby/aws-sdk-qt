// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROLEREQUEST_H
#define QTAWS_DELETEROLEREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class DeleteRoleRequestPrivate;

class QTAWSIAM_EXPORT DeleteRoleRequest : public IamRequest {

public:
    DeleteRoleRequest(const DeleteRoleRequest &other);
    DeleteRoleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRoleRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
