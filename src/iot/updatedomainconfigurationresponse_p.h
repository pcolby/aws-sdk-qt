// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINCONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATEDOMAINCONFIGURATIONRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class UpdateDomainConfigurationResponse;

class UpdateDomainConfigurationResponsePrivate : public IoTResponsePrivate {

public:

    explicit UpdateDomainConfigurationResponsePrivate(UpdateDomainConfigurationResponse * const q);

    void parseUpdateDomainConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDomainConfigurationResponse)
    Q_DISABLE_COPY(UpdateDomainConfigurationResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
