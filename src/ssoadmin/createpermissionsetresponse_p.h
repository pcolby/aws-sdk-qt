// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPERMISSIONSETRESPONSE_P_H
#define QTAWS_CREATEPERMISSIONSETRESPONSE_P_H

#include "ssoadminresponse_p.h"

namespace QtAws {
namespace SsoAdmin {

class CreatePermissionSetResponse;

class CreatePermissionSetResponsePrivate : public SsoAdminResponsePrivate {

public:

    explicit CreatePermissionSetResponsePrivate(CreatePermissionSetResponse * const q);

    void parseCreatePermissionSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePermissionSetResponse)
    Q_DISABLE_COPY(CreatePermissionSetResponsePrivate)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
