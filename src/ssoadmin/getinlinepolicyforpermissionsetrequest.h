// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINLINEPOLICYFORPERMISSIONSETREQUEST_H
#define QTAWS_GETINLINEPOLICYFORPERMISSIONSETREQUEST_H

#include "ssoadminrequest.h"

namespace QtAws {
namespace SsoAdmin {

class GetInlinePolicyForPermissionSetRequestPrivate;

class QTAWSSSOADMIN_EXPORT GetInlinePolicyForPermissionSetRequest : public SsoAdminRequest {

public:
    GetInlinePolicyForPermissionSetRequest(const GetInlinePolicyForPermissionSetRequest &other);
    GetInlinePolicyForPermissionSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInlinePolicyForPermissionSetRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
