// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPERMISSIONSETPROVISIONINGSTATUSRESPONSE_H
#define QTAWS_LISTPERMISSIONSETPROVISIONINGSTATUSRESPONSE_H

#include "ssoadminresponse.h"
#include "listpermissionsetprovisioningstatusrequest.h"

namespace QtAws {
namespace SsoAdmin {

class ListPermissionSetProvisioningStatusResponsePrivate;

class QTAWSSSOADMIN_EXPORT ListPermissionSetProvisioningStatusResponse : public SsoAdminResponse {
    Q_OBJECT

public:
    ListPermissionSetProvisioningStatusResponse(const ListPermissionSetProvisioningStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPermissionSetProvisioningStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPermissionSetProvisioningStatusResponse)
    Q_DISABLE_COPY(ListPermissionSetProvisioningStatusResponse)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
