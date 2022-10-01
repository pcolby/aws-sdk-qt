// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATAINTEGRATIONRESPONSE_P_H
#define QTAWS_CREATEDATAINTEGRATIONRESPONSE_P_H

#include "appintegrationsresponse_p.h"

namespace QtAws {
namespace AppIntegrations {

class CreateDataIntegrationResponse;

class CreateDataIntegrationResponsePrivate : public AppIntegrationsResponsePrivate {

public:

    explicit CreateDataIntegrationResponsePrivate(CreateDataIntegrationResponse * const q);

    void parseCreateDataIntegrationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDataIntegrationResponse)
    Q_DISABLE_COPY(CreateDataIntegrationResponsePrivate)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
