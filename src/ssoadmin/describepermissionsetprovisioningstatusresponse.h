// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPERMISSIONSETPROVISIONINGSTATUSRESPONSE_H
#define QTAWS_DESCRIBEPERMISSIONSETPROVISIONINGSTATUSRESPONSE_H

#include "ssoadminresponse.h"
#include "describepermissionsetprovisioningstatusrequest.h"

namespace QtAws {
namespace SsoAdmin {

class DescribePermissionSetProvisioningStatusResponsePrivate;

class QTAWSSSOADMIN_EXPORT DescribePermissionSetProvisioningStatusResponse : public SsoAdminResponse {
    Q_OBJECT

public:
    DescribePermissionSetProvisioningStatusResponse(const DescribePermissionSetProvisioningStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePermissionSetProvisioningStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePermissionSetProvisioningStatusResponse)
    Q_DISABLE_COPY(DescribePermissionSetProvisioningStatusResponse)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
