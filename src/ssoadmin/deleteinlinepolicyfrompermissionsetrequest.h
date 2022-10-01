// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINLINEPOLICYFROMPERMISSIONSETREQUEST_H
#define QTAWS_DELETEINLINEPOLICYFROMPERMISSIONSETREQUEST_H

#include "ssoadminrequest.h"

namespace QtAws {
namespace SsoAdmin {

class DeleteInlinePolicyFromPermissionSetRequestPrivate;

class QTAWSSSOADMIN_EXPORT DeleteInlinePolicyFromPermissionSetRequest : public SsoAdminRequest {

public:
    DeleteInlinePolicyFromPermissionSetRequest(const DeleteInlinePolicyFromPermissionSetRequest &other);
    DeleteInlinePolicyFromPermissionSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteInlinePolicyFromPermissionSetRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
