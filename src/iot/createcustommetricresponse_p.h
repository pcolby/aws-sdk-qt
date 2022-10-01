// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMMETRICRESPONSE_P_H
#define QTAWS_CREATECUSTOMMETRICRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class CreateCustomMetricResponse;

class CreateCustomMetricResponsePrivate : public IoTResponsePrivate {

public:

    explicit CreateCustomMetricResponsePrivate(CreateCustomMetricResponse * const q);

    void parseCreateCustomMetricResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCustomMetricResponse)
    Q_DISABLE_COPY(CreateCustomMetricResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
