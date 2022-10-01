// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPERMISSIONSBOUNDARYTOPERMISSIONSETRESPONSE_P_H
#define QTAWS_PUTPERMISSIONSBOUNDARYTOPERMISSIONSETRESPONSE_P_H

#include "ssoadminresponse_p.h"

namespace QtAws {
namespace SsoAdmin {

class PutPermissionsBoundaryToPermissionSetResponse;

class PutPermissionsBoundaryToPermissionSetResponsePrivate : public SsoAdminResponsePrivate {

public:

    explicit PutPermissionsBoundaryToPermissionSetResponsePrivate(PutPermissionsBoundaryToPermissionSetResponse * const q);

    void parsePutPermissionsBoundaryToPermissionSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutPermissionsBoundaryToPermissionSetResponse)
    Q_DISABLE_COPY(PutPermissionsBoundaryToPermissionSetResponsePrivate)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
