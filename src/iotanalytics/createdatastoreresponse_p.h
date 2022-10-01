// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASTORERESPONSE_P_H
#define QTAWS_CREATEDATASTORERESPONSE_P_H

#include "iotanalyticsresponse_p.h"

namespace QtAws {
namespace IoTAnalytics {

class CreateDatastoreResponse;

class CreateDatastoreResponsePrivate : public IoTAnalyticsResponsePrivate {

public:

    explicit CreateDatastoreResponsePrivate(CreateDatastoreResponse * const q);

    void parseCreateDatastoreResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDatastoreResponse)
    Q_DISABLE_COPY(CreateDatastoreResponsePrivate)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
