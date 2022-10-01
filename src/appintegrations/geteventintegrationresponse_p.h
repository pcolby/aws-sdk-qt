// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTINTEGRATIONRESPONSE_P_H
#define QTAWS_GETEVENTINTEGRATIONRESPONSE_P_H

#include "appintegrationsresponse_p.h"

namespace QtAws {
namespace AppIntegrations {

class GetEventIntegrationResponse;

class GetEventIntegrationResponsePrivate : public AppIntegrationsResponsePrivate {

public:

    explicit GetEventIntegrationResponsePrivate(GetEventIntegrationResponse * const q);

    void parseGetEventIntegrationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEventIntegrationResponse)
    Q_DISABLE_COPY(GetEventIntegrationResponsePrivate)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
