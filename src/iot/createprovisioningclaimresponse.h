// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROVISIONINGCLAIMRESPONSE_H
#define QTAWS_CREATEPROVISIONINGCLAIMRESPONSE_H

#include "iotresponse.h"
#include "createprovisioningclaimrequest.h"

namespace QtAws {
namespace IoT {

class CreateProvisioningClaimResponsePrivate;

class QTAWSIOT_EXPORT CreateProvisioningClaimResponse : public IoTResponse {
    Q_OBJECT

public:
    CreateProvisioningClaimResponse(const CreateProvisioningClaimRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateProvisioningClaimRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateProvisioningClaimResponse)
    Q_DISABLE_COPY(CreateProvisioningClaimResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
