// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROVISIONINGTEMPLATERESPONSE_P_H
#define QTAWS_DESCRIBEPROVISIONINGTEMPLATERESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DescribeProvisioningTemplateResponse;

class DescribeProvisioningTemplateResponsePrivate : public IoTResponsePrivate {

public:

    explicit DescribeProvisioningTemplateResponsePrivate(DescribeProvisioningTemplateResponse * const q);

    void parseDescribeProvisioningTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeProvisioningTemplateResponse)
    Q_DISABLE_COPY(DescribeProvisioningTemplateResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
