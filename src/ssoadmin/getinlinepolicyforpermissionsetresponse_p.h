// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINLINEPOLICYFORPERMISSIONSETRESPONSE_P_H
#define QTAWS_GETINLINEPOLICYFORPERMISSIONSETRESPONSE_P_H

#include "ssoadminresponse_p.h"

namespace QtAws {
namespace SsoAdmin {

class GetInlinePolicyForPermissionSetResponse;

class GetInlinePolicyForPermissionSetResponsePrivate : public SsoAdminResponsePrivate {

public:

    explicit GetInlinePolicyForPermissionSetResponsePrivate(GetInlinePolicyForPermissionSetResponse * const q);

    void parseGetInlinePolicyForPermissionSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetInlinePolicyForPermissionSetResponse)
    Q_DISABLE_COPY(GetInlinePolicyForPermissionSetResponsePrivate)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
