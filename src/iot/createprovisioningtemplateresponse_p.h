// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROVISIONINGTEMPLATERESPONSE_P_H
#define QTAWS_CREATEPROVISIONINGTEMPLATERESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class CreateProvisioningTemplateResponse;

class CreateProvisioningTemplateResponsePrivate : public IoTResponsePrivate {

public:

    explicit CreateProvisioningTemplateResponsePrivate(CreateProvisioningTemplateResponse * const q);

    void parseCreateProvisioningTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateProvisioningTemplateResponse)
    Q_DISABLE_COPY(CreateProvisioningTemplateResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
