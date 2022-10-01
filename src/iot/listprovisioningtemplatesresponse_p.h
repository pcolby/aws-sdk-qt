// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROVISIONINGTEMPLATESRESPONSE_P_H
#define QTAWS_LISTPROVISIONINGTEMPLATESRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListProvisioningTemplatesResponse;

class ListProvisioningTemplatesResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListProvisioningTemplatesResponsePrivate(ListProvisioningTemplatesResponse * const q);

    void parseListProvisioningTemplatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListProvisioningTemplatesResponse)
    Q_DISABLE_COPY(ListProvisioningTemplatesResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
