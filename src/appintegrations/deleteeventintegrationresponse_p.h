// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTINTEGRATIONRESPONSE_P_H
#define QTAWS_DELETEEVENTINTEGRATIONRESPONSE_P_H

#include "appintegrationsresponse_p.h"

namespace QtAws {
namespace AppIntegrations {

class DeleteEventIntegrationResponse;

class DeleteEventIntegrationResponsePrivate : public AppIntegrationsResponsePrivate {

public:

    explicit DeleteEventIntegrationResponsePrivate(DeleteEventIntegrationResponse * const q);

    void parseDeleteEventIntegrationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEventIntegrationResponse)
    Q_DISABLE_COPY(DeleteEventIntegrationResponsePrivate)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
