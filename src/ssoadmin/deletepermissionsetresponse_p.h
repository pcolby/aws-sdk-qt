// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPERMISSIONSETRESPONSE_P_H
#define QTAWS_DELETEPERMISSIONSETRESPONSE_P_H

#include "ssoadminresponse_p.h"

namespace QtAws {
namespace SsoAdmin {

class DeletePermissionSetResponse;

class DeletePermissionSetResponsePrivate : public SsoAdminResponsePrivate {

public:

    explicit DeletePermissionSetResponsePrivate(DeletePermissionSetResponse * const q);

    void parseDeletePermissionSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePermissionSetResponse)
    Q_DISABLE_COPY(DeletePermissionSetResponsePrivate)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
