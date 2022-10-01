// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDOMAINCONFIGURATIONRESPONSE_P_H
#define QTAWS_CREATEDOMAINCONFIGURATIONRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class CreateDomainConfigurationResponse;

class CreateDomainConfigurationResponsePrivate : public IoTResponsePrivate {

public:

    explicit CreateDomainConfigurationResponsePrivate(CreateDomainConfigurationResponse * const q);

    void parseCreateDomainConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDomainConfigurationResponse)
    Q_DISABLE_COPY(CreateDomainConfigurationResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
