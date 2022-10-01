// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROVISIONPERMISSIONSETREQUEST_H
#define QTAWS_PROVISIONPERMISSIONSETREQUEST_H

#include "ssoadminrequest.h"

namespace QtAws {
namespace SsoAdmin {

class ProvisionPermissionSetRequestPrivate;

class QTAWSSSOADMIN_EXPORT ProvisionPermissionSetRequest : public SsoAdminRequest {

public:
    ProvisionPermissionSetRequest(const ProvisionPermissionSetRequest &other);
    ProvisionPermissionSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ProvisionPermissionSetRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
