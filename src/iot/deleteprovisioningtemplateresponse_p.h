// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROVISIONINGTEMPLATERESPONSE_P_H
#define QTAWS_DELETEPROVISIONINGTEMPLATERESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DeleteProvisioningTemplateResponse;

class DeleteProvisioningTemplateResponsePrivate : public IoTResponsePrivate {

public:

    explicit DeleteProvisioningTemplateResponsePrivate(DeleteProvisioningTemplateResponse * const q);

    void parseDeleteProvisioningTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteProvisioningTemplateResponse)
    Q_DISABLE_COPY(DeleteProvisioningTemplateResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
