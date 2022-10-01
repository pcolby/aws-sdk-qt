// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMMETRICRESPONSE_P_H
#define QTAWS_DELETECUSTOMMETRICRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DeleteCustomMetricResponse;

class DeleteCustomMetricResponsePrivate : public IoTResponsePrivate {

public:

    explicit DeleteCustomMetricResponsePrivate(DeleteCustomMetricResponse * const q);

    void parseDeleteCustomMetricResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCustomMetricResponse)
    Q_DISABLE_COPY(DeleteCustomMetricResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
