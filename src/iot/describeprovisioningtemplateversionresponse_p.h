// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROVISIONINGTEMPLATEVERSIONRESPONSE_P_H
#define QTAWS_DESCRIBEPROVISIONINGTEMPLATEVERSIONRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DescribeProvisioningTemplateVersionResponse;

class DescribeProvisioningTemplateVersionResponsePrivate : public IoTResponsePrivate {

public:

    explicit DescribeProvisioningTemplateVersionResponsePrivate(DescribeProvisioningTemplateVersionResponse * const q);

    void parseDescribeProvisioningTemplateVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeProvisioningTemplateVersionResponse)
    Q_DISABLE_COPY(DescribeProvisioningTemplateVersionResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
