// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECUSTOMMETRICRESPONSE_P_H
#define QTAWS_UPDATECUSTOMMETRICRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class UpdateCustomMetricResponse;

class UpdateCustomMetricResponsePrivate : public IoTResponsePrivate {

public:

    explicit UpdateCustomMetricResponsePrivate(UpdateCustomMetricResponse * const q);

    void parseUpdateCustomMetricResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateCustomMetricResponse)
    Q_DISABLE_COPY(UpdateCustomMetricResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
