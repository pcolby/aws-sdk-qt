// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROVISIONINGCLAIMRESPONSE_P_H
#define QTAWS_CREATEPROVISIONINGCLAIMRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class CreateProvisioningClaimResponse;

class CreateProvisioningClaimResponsePrivate : public IoTResponsePrivate {

public:

    explicit CreateProvisioningClaimResponsePrivate(CreateProvisioningClaimResponse * const q);

    void parseCreateProvisioningClaimResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateProvisioningClaimResponse)
    Q_DISABLE_COPY(CreateProvisioningClaimResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
