// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROVISIONINGTEMPLATERESPONSE_H
#define QTAWS_UPDATEPROVISIONINGTEMPLATERESPONSE_H

#include "iotresponse.h"
#include "updateprovisioningtemplaterequest.h"

namespace QtAws {
namespace IoT {

class UpdateProvisioningTemplateResponsePrivate;

class QTAWSIOT_EXPORT UpdateProvisioningTemplateResponse : public IoTResponse {
    Q_OBJECT

public:
    UpdateProvisioningTemplateResponse(const UpdateProvisioningTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateProvisioningTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateProvisioningTemplateResponse)
    Q_DISABLE_COPY(UpdateProvisioningTemplateResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
