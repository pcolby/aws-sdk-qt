// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPERMISSIONSBOUNDARYFORPERMISSIONSETREQUEST_H
#define QTAWS_GETPERMISSIONSBOUNDARYFORPERMISSIONSETREQUEST_H

#include "ssoadminrequest.h"

namespace QtAws {
namespace SsoAdmin {

class GetPermissionsBoundaryForPermissionSetRequestPrivate;

class QTAWSSSOADMIN_EXPORT GetPermissionsBoundaryForPermissionSetRequest : public SsoAdminRequest {

public:
    GetPermissionsBoundaryForPermissionSetRequest(const GetPermissionsBoundaryForPermissionSetRequest &other);
    GetPermissionsBoundaryForPermissionSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPermissionsBoundaryForPermissionSetRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
