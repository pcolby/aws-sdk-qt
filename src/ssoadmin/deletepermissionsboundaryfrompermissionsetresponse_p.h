// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPERMISSIONSBOUNDARYFROMPERMISSIONSETRESPONSE_P_H
#define QTAWS_DELETEPERMISSIONSBOUNDARYFROMPERMISSIONSETRESPONSE_P_H

#include "ssoadminresponse_p.h"

namespace QtAws {
namespace SsoAdmin {

class DeletePermissionsBoundaryFromPermissionSetResponse;

class DeletePermissionsBoundaryFromPermissionSetResponsePrivate : public SsoAdminResponsePrivate {

public:

    explicit DeletePermissionsBoundaryFromPermissionSetResponsePrivate(DeletePermissionsBoundaryFromPermissionSetResponse * const q);

    void parseDeletePermissionsBoundaryFromPermissionSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePermissionsBoundaryFromPermissionSetResponse)
    Q_DISABLE_COPY(DeletePermissionsBoundaryFromPermissionSetResponsePrivate)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
