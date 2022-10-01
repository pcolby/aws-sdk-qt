// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTINTEGRATIONASSOCIATIONSRESPONSE_P_H
#define QTAWS_LISTEVENTINTEGRATIONASSOCIATIONSRESPONSE_P_H

#include "appintegrationsresponse_p.h"

namespace QtAws {
namespace AppIntegrations {

class ListEventIntegrationAssociationsResponse;

class ListEventIntegrationAssociationsResponsePrivate : public AppIntegrationsResponsePrivate {

public:

    explicit ListEventIntegrationAssociationsResponsePrivate(ListEventIntegrationAssociationsResponse * const q);

    void parseListEventIntegrationAssociationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEventIntegrationAssociationsResponse)
    Q_DISABLE_COPY(ListEventIntegrationAssociationsResponsePrivate)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
