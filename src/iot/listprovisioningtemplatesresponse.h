// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROVISIONINGTEMPLATESRESPONSE_H
#define QTAWS_LISTPROVISIONINGTEMPLATESRESPONSE_H

#include "iotresponse.h"
#include "listprovisioningtemplatesrequest.h"

namespace QtAws {
namespace IoT {

class ListProvisioningTemplatesResponsePrivate;

class QTAWSIOT_EXPORT ListProvisioningTemplatesResponse : public IoTResponse {
    Q_OBJECT

public:
    ListProvisioningTemplatesResponse(const ListProvisioningTemplatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListProvisioningTemplatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProvisioningTemplatesResponse)
    Q_DISABLE_COPY(ListProvisioningTemplatesResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
