// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHMANAGEDPOLICYFROMPERMISSIONSETRESPONSE_P_H
#define QTAWS_DETACHMANAGEDPOLICYFROMPERMISSIONSETRESPONSE_P_H

#include "ssoadminresponse_p.h"

namespace QtAws {
namespace SsoAdmin {

class DetachManagedPolicyFromPermissionSetResponse;

class DetachManagedPolicyFromPermissionSetResponsePrivate : public SsoAdminResponsePrivate {

public:

    explicit DetachManagedPolicyFromPermissionSetResponsePrivate(DetachManagedPolicyFromPermissionSetResponse * const q);

    void parseDetachManagedPolicyFromPermissionSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetachManagedPolicyFromPermissionSetResponse)
    Q_DISABLE_COPY(DetachManagedPolicyFromPermissionSetResponsePrivate)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
