// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROLEREQUEST_H
#define QTAWS_UPDATEROLEREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class UpdateRoleRequestPrivate;

class QTAWSIAM_EXPORT UpdateRoleRequest : public IamRequest {

public:
    UpdateRoleRequest(const UpdateRoleRequest &other);
    UpdateRoleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRoleRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
