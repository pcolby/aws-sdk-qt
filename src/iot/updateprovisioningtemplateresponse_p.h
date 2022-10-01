// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROVISIONINGTEMPLATERESPONSE_P_H
#define QTAWS_UPDATEPROVISIONINGTEMPLATERESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class UpdateProvisioningTemplateResponse;

class UpdateProvisioningTemplateResponsePrivate : public IoTResponsePrivate {

public:

    explicit UpdateProvisioningTemplateResponsePrivate(UpdateProvisioningTemplateResponse * const q);

    void parseUpdateProvisioningTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateProvisioningTemplateResponse)
    Q_DISABLE_COPY(UpdateProvisioningTemplateResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
