// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONFIGURATIONSRESPONSE_P_H
#define QTAWS_LISTCONFIGURATIONSRESPONSE_P_H

#include "applicationdiscoveryresponse_p.h"

namespace QtAws {
namespace ApplicationDiscovery {

class ListConfigurationsResponse;

class ListConfigurationsResponsePrivate : public ApplicationDiscoveryResponsePrivate {

public:

    explicit ListConfigurationsResponsePrivate(ListConfigurationsResponse * const q);

    void parseListConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListConfigurationsResponse)
    Q_DISABLE_COPY(ListConfigurationsResponsePrivate)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
