// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTINTEGRATIONSRESPONSE_P_H
#define QTAWS_LISTEVENTINTEGRATIONSRESPONSE_P_H

#include "appintegrationsresponse_p.h"

namespace QtAws {
namespace AppIntegrations {

class ListEventIntegrationsResponse;

class ListEventIntegrationsResponsePrivate : public AppIntegrationsResponsePrivate {

public:

    explicit ListEventIntegrationsResponsePrivate(ListEventIntegrationsResponse * const q);

    void parseListEventIntegrationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEventIntegrationsResponse)
    Q_DISABLE_COPY(ListEventIntegrationsResponsePrivate)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
