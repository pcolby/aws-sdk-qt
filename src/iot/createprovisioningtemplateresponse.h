// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROVISIONINGTEMPLATERESPONSE_H
#define QTAWS_CREATEPROVISIONINGTEMPLATERESPONSE_H

#include "iotresponse.h"
#include "createprovisioningtemplaterequest.h"

namespace QtAws {
namespace IoT {

class CreateProvisioningTemplateResponsePrivate;

class QTAWSIOT_EXPORT CreateProvisioningTemplateResponse : public IoTResponse {
    Q_OBJECT

public:
    CreateProvisioningTemplateResponse(const CreateProvisioningTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateProvisioningTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateProvisioningTemplateResponse)
    Q_DISABLE_COPY(CreateProvisioningTemplateResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
