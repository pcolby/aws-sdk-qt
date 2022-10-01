// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMAINCONFIGURATIONRESPONSE_P_H
#define QTAWS_DESCRIBEDOMAINCONFIGURATIONRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DescribeDomainConfigurationResponse;

class DescribeDomainConfigurationResponsePrivate : public IoTResponsePrivate {

public:

    explicit DescribeDomainConfigurationResponsePrivate(DescribeDomainConfigurationResponse * const q);

    void parseDescribeDomainConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDomainConfigurationResponse)
    Q_DISABLE_COPY(DescribeDomainConfigurationResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
