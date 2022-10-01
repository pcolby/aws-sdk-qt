// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMANAGEDINSTANCEROLEREQUEST_H
#define QTAWS_UPDATEMANAGEDINSTANCEROLEREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class UpdateManagedInstanceRoleRequestPrivate;

class QTAWSSSM_EXPORT UpdateManagedInstanceRoleRequest : public SsmRequest {

public:
    UpdateManagedInstanceRoleRequest(const UpdateManagedInstanceRoleRequest &other);
    UpdateManagedInstanceRoleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateManagedInstanceRoleRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
