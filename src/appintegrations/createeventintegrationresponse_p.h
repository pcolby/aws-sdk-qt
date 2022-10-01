// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEVENTINTEGRATIONRESPONSE_P_H
#define QTAWS_CREATEEVENTINTEGRATIONRESPONSE_P_H

#include "appintegrationsresponse_p.h"

namespace QtAws {
namespace AppIntegrations {

class CreateEventIntegrationResponse;

class CreateEventIntegrationResponsePrivate : public AppIntegrationsResponsePrivate {

public:

    explicit CreateEventIntegrationResponsePrivate(CreateEventIntegrationResponse * const q);

    void parseCreateEventIntegrationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateEventIntegrationResponse)
    Q_DISABLE_COPY(CreateEventIntegrationResponsePrivate)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
