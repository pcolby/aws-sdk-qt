// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROVISIONINGTEMPLATERESPONSE_H
#define QTAWS_DESCRIBEPROVISIONINGTEMPLATERESPONSE_H

#include "iotresponse.h"
#include "describeprovisioningtemplaterequest.h"

namespace QtAws {
namespace IoT {

class DescribeProvisioningTemplateResponsePrivate;

class QTAWSIOT_EXPORT DescribeProvisioningTemplateResponse : public IoTResponse {
    Q_OBJECT

public:
    DescribeProvisioningTemplateResponse(const DescribeProvisioningTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeProvisioningTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeProvisioningTemplateResponse)
    Q_DISABLE_COPY(DescribeProvisioningTemplateResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
