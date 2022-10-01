// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPERMISSIONSETREQUEST_H
#define QTAWS_DELETEPERMISSIONSETREQUEST_H

#include "ssoadminrequest.h"

namespace QtAws {
namespace SsoAdmin {

class DeletePermissionSetRequestPrivate;

class QTAWSSSOADMIN_EXPORT DeletePermissionSetRequest : public SsoAdminRequest {

public:
    DeletePermissionSetRequest(const DeletePermissionSetRequest &other);
    DeletePermissionSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePermissionSetRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
