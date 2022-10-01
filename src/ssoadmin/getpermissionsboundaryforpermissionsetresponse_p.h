// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPERMISSIONSBOUNDARYFORPERMISSIONSETRESPONSE_P_H
#define QTAWS_GETPERMISSIONSBOUNDARYFORPERMISSIONSETRESPONSE_P_H

#include "ssoadminresponse_p.h"

namespace QtAws {
namespace SsoAdmin {

class GetPermissionsBoundaryForPermissionSetResponse;

class GetPermissionsBoundaryForPermissionSetResponsePrivate : public SsoAdminResponsePrivate {

public:

    explicit GetPermissionsBoundaryForPermissionSetResponsePrivate(GetPermissionsBoundaryForPermissionSetResponse * const q);

    void parseGetPermissionsBoundaryForPermissionSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPermissionsBoundaryForPermissionSetResponse)
    Q_DISABLE_COPY(GetPermissionsBoundaryForPermissionSetResponsePrivate)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
