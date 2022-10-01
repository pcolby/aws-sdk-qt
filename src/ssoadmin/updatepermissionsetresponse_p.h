// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPERMISSIONSETRESPONSE_P_H
#define QTAWS_UPDATEPERMISSIONSETRESPONSE_P_H

#include "ssoadminresponse_p.h"

namespace QtAws {
namespace SsoAdmin {

class UpdatePermissionSetResponse;

class UpdatePermissionSetResponsePrivate : public SsoAdminResponsePrivate {

public:

    explicit UpdatePermissionSetResponsePrivate(UpdatePermissionSetResponse * const q);

    void parseUpdatePermissionSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePermissionSetResponse)
    Q_DISABLE_COPY(UpdatePermissionSetResponsePrivate)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
