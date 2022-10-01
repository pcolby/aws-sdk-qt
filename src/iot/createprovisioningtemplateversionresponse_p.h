// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROVISIONINGTEMPLATEVERSIONRESPONSE_P_H
#define QTAWS_CREATEPROVISIONINGTEMPLATEVERSIONRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class CreateProvisioningTemplateVersionResponse;

class CreateProvisioningTemplateVersionResponsePrivate : public IoTResponsePrivate {

public:

    explicit CreateProvisioningTemplateVersionResponsePrivate(CreateProvisioningTemplateVersionResponse * const q);

    void parseCreateProvisioningTemplateVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateProvisioningTemplateVersionResponse)
    Q_DISABLE_COPY(CreateProvisioningTemplateVersionResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
