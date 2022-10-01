// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROVISIONPERMISSIONSETRESPONSE_P_H
#define QTAWS_PROVISIONPERMISSIONSETRESPONSE_P_H

#include "ssoadminresponse_p.h"

namespace QtAws {
namespace SsoAdmin {

class ProvisionPermissionSetResponse;

class ProvisionPermissionSetResponsePrivate : public SsoAdminResponsePrivate {

public:

    explicit ProvisionPermissionSetResponsePrivate(ProvisionPermissionSetResponse * const q);

    void parseProvisionPermissionSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ProvisionPermissionSetResponse)
    Q_DISABLE_COPY(ProvisionPermissionSetResponsePrivate)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
