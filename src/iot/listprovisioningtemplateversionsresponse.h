// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROVISIONINGTEMPLATEVERSIONSRESPONSE_H
#define QTAWS_LISTPROVISIONINGTEMPLATEVERSIONSRESPONSE_H

#include "iotresponse.h"
#include "listprovisioningtemplateversionsrequest.h"

namespace QtAws {
namespace IoT {

class ListProvisioningTemplateVersionsResponsePrivate;

class QTAWSIOT_EXPORT ListProvisioningTemplateVersionsResponse : public IoTResponse {
    Q_OBJECT

public:
    ListProvisioningTemplateVersionsResponse(const ListProvisioningTemplateVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListProvisioningTemplateVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProvisioningTemplateVersionsResponse)
    Q_DISABLE_COPY(ListProvisioningTemplateVersionsResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
