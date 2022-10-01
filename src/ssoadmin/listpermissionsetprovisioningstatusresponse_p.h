// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPERMISSIONSETPROVISIONINGSTATUSRESPONSE_P_H
#define QTAWS_LISTPERMISSIONSETPROVISIONINGSTATUSRESPONSE_P_H

#include "ssoadminresponse_p.h"

namespace QtAws {
namespace SsoAdmin {

class ListPermissionSetProvisioningStatusResponse;

class ListPermissionSetProvisioningStatusResponsePrivate : public SsoAdminResponsePrivate {

public:

    explicit ListPermissionSetProvisioningStatusResponsePrivate(ListPermissionSetProvisioningStatusResponse * const q);

    void parseListPermissionSetProvisioningStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPermissionSetProvisioningStatusResponse)
    Q_DISABLE_COPY(ListPermissionSetProvisioningStatusResponsePrivate)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
