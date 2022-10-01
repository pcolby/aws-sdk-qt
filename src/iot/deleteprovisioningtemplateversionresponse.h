// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROVISIONINGTEMPLATEVERSIONRESPONSE_H
#define QTAWS_DELETEPROVISIONINGTEMPLATEVERSIONRESPONSE_H

#include "iotresponse.h"
#include "deleteprovisioningtemplateversionrequest.h"

namespace QtAws {
namespace IoT {

class DeleteProvisioningTemplateVersionResponsePrivate;

class QTAWSIOT_EXPORT DeleteProvisioningTemplateVersionResponse : public IoTResponse {
    Q_OBJECT

public:
    DeleteProvisioningTemplateVersionResponse(const DeleteProvisioningTemplateVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteProvisioningTemplateVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProvisioningTemplateVersionResponse)
    Q_DISABLE_COPY(DeleteProvisioningTemplateVersionResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
