// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATAINTEGRATIONASSOCIATIONSRESPONSE_P_H
#define QTAWS_LISTDATAINTEGRATIONASSOCIATIONSRESPONSE_P_H

#include "appintegrationsresponse_p.h"

namespace QtAws {
namespace AppIntegrations {

class ListDataIntegrationAssociationsResponse;

class ListDataIntegrationAssociationsResponsePrivate : public AppIntegrationsResponsePrivate {

public:

    explicit ListDataIntegrationAssociationsResponsePrivate(ListDataIntegrationAssociationsResponse * const q);

    void parseListDataIntegrationAssociationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDataIntegrationAssociationsResponse)
    Q_DISABLE_COPY(ListDataIntegrationAssociationsResponsePrivate)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
