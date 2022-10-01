// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPERMISSIONSETREQUEST_H
#define QTAWS_CREATEPERMISSIONSETREQUEST_H

#include "ssoadminrequest.h"

namespace QtAws {
namespace SsoAdmin {

class CreatePermissionSetRequestPrivate;

class QTAWSSSOADMIN_EXPORT CreatePermissionSetRequest : public SsoAdminRequest {

public:
    CreatePermissionSetRequest(const CreatePermissionSetRequest &other);
    CreatePermissionSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePermissionSetRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
