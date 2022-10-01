// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATAINTEGRATIONSRESPONSE_P_H
#define QTAWS_LISTDATAINTEGRATIONSRESPONSE_P_H

#include "appintegrationsresponse_p.h"

namespace QtAws {
namespace AppIntegrations {

class ListDataIntegrationsResponse;

class ListDataIntegrationsResponsePrivate : public AppIntegrationsResponsePrivate {

public:

    explicit ListDataIntegrationsResponsePrivate(ListDataIntegrationsResponse * const q);

    void parseListDataIntegrationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDataIntegrationsResponse)
    Q_DISABLE_COPY(ListDataIntegrationsResponsePrivate)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
