// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHMANAGEDPOLICYTOPERMISSIONSETRESPONSE_P_H
#define QTAWS_ATTACHMANAGEDPOLICYTOPERMISSIONSETRESPONSE_P_H

#include "ssoadminresponse_p.h"

namespace QtAws {
namespace SsoAdmin {

class AttachManagedPolicyToPermissionSetResponse;

class AttachManagedPolicyToPermissionSetResponsePrivate : public SsoAdminResponsePrivate {

public:

    explicit AttachManagedPolicyToPermissionSetResponsePrivate(AttachManagedPolicyToPermissionSetResponse * const q);

    void parseAttachManagedPolicyToPermissionSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AttachManagedPolicyToPermissionSetResponse)
    Q_DISABLE_COPY(AttachManagedPolicyToPermissionSetResponsePrivate)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
