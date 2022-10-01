// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPERMISSIONSBOUNDARYTOPERMISSIONSETREQUEST_H
#define QTAWS_PUTPERMISSIONSBOUNDARYTOPERMISSIONSETREQUEST_H

#include "ssoadminrequest.h"

namespace QtAws {
namespace SsoAdmin {

class PutPermissionsBoundaryToPermissionSetRequestPrivate;

class QTAWSSSOADMIN_EXPORT PutPermissionsBoundaryToPermissionSetRequest : public SsoAdminRequest {

public:
    PutPermissionsBoundaryToPermissionSetRequest(const PutPermissionsBoundaryToPermissionSetRequest &other);
    PutPermissionsBoundaryToPermissionSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutPermissionsBoundaryToPermissionSetRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
