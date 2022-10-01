// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHMANAGEDPOLICYFROMPERMISSIONSETRESPONSE_H
#define QTAWS_DETACHMANAGEDPOLICYFROMPERMISSIONSETRESPONSE_H

#include "ssoadminresponse.h"
#include "detachmanagedpolicyfrompermissionsetrequest.h"

namespace QtAws {
namespace SsoAdmin {

class DetachManagedPolicyFromPermissionSetResponsePrivate;

class QTAWSSSOADMIN_EXPORT DetachManagedPolicyFromPermissionSetResponse : public SsoAdminResponse {
    Q_OBJECT

public:
    DetachManagedPolicyFromPermissionSetResponse(const DetachManagedPolicyFromPermissionSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetachManagedPolicyFromPermissionSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachManagedPolicyFromPermissionSetResponse)
    Q_DISABLE_COPY(DetachManagedPolicyFromPermissionSetResponse)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
