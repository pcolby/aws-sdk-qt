// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROVISIONINGTEMPLATERESPONSE_H
#define QTAWS_DELETEPROVISIONINGTEMPLATERESPONSE_H

#include "iotresponse.h"
#include "deleteprovisioningtemplaterequest.h"

namespace QtAws {
namespace IoT {

class DeleteProvisioningTemplateResponsePrivate;

class QTAWSIOT_EXPORT DeleteProvisioningTemplateResponse : public IoTResponse {
    Q_OBJECT

public:
    DeleteProvisioningTemplateResponse(const DeleteProvisioningTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteProvisioningTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProvisioningTemplateResponse)
    Q_DISABLE_COPY(DeleteProvisioningTemplateResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
