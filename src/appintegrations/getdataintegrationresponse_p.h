// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATAINTEGRATIONRESPONSE_P_H
#define QTAWS_GETDATAINTEGRATIONRESPONSE_P_H

#include "appintegrationsresponse_p.h"

namespace QtAws {
namespace AppIntegrations {

class GetDataIntegrationResponse;

class GetDataIntegrationResponsePrivate : public AppIntegrationsResponsePrivate {

public:

    explicit GetDataIntegrationResponsePrivate(GetDataIntegrationResponse * const q);

    void parseGetDataIntegrationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDataIntegrationResponse)
    Q_DISABLE_COPY(GetDataIntegrationResponsePrivate)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
