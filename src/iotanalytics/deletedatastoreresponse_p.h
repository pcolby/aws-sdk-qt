// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATASTORERESPONSE_P_H
#define QTAWS_DELETEDATASTORERESPONSE_P_H

#include "iotanalyticsresponse_p.h"

namespace QtAws {
namespace IoTAnalytics {

class DeleteDatastoreResponse;

class DeleteDatastoreResponsePrivate : public IoTAnalyticsResponsePrivate {

public:

    explicit DeleteDatastoreResponsePrivate(DeleteDatastoreResponse * const q);

    void parseDeleteDatastoreResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDatastoreResponse)
    Q_DISABLE_COPY(DeleteDatastoreResponsePrivate)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
