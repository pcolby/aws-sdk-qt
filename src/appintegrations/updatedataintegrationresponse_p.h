// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATAINTEGRATIONRESPONSE_P_H
#define QTAWS_UPDATEDATAINTEGRATIONRESPONSE_P_H

#include "appintegrationsresponse_p.h"

namespace QtAws {
namespace AppIntegrations {

class UpdateDataIntegrationResponse;

class UpdateDataIntegrationResponsePrivate : public AppIntegrationsResponsePrivate {

public:

    explicit UpdateDataIntegrationResponsePrivate(UpdateDataIntegrationResponse * const q);

    void parseUpdateDataIntegrationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDataIntegrationResponse)
    Q_DISABLE_COPY(UpdateDataIntegrationResponsePrivate)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
