// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASTORERESPONSE_P_H
#define QTAWS_UPDATEDATASTORERESPONSE_P_H

#include "iotanalyticsresponse_p.h"

namespace QtAws {
namespace IoTAnalytics {

class UpdateDatastoreResponse;

class UpdateDatastoreResponsePrivate : public IoTAnalyticsResponsePrivate {

public:

    explicit UpdateDatastoreResponsePrivate(UpdateDatastoreResponse * const q);

    void parseUpdateDatastoreResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDatastoreResponse)
    Q_DISABLE_COPY(UpdateDatastoreResponsePrivate)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
