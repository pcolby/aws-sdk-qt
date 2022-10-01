// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATAINTEGRATIONRESPONSE_P_H
#define QTAWS_DELETEDATAINTEGRATIONRESPONSE_P_H

#include "appintegrationsresponse_p.h"

namespace QtAws {
namespace AppIntegrations {

class DeleteDataIntegrationResponse;

class DeleteDataIntegrationResponsePrivate : public AppIntegrationsResponsePrivate {

public:

    explicit DeleteDataIntegrationResponsePrivate(DeleteDataIntegrationResponse * const q);

    void parseDeleteDataIntegrationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDataIntegrationResponse)
    Q_DISABLE_COPY(DeleteDataIntegrationResponsePrivate)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
