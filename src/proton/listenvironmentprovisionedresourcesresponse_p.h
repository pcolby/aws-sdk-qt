// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENVIRONMENTPROVISIONEDRESOURCESRESPONSE_P_H
#define QTAWS_LISTENVIRONMENTPROVISIONEDRESOURCESRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class ListEnvironmentProvisionedResourcesResponse;

class ListEnvironmentProvisionedResourcesResponsePrivate : public ProtonResponsePrivate {

public:

    explicit ListEnvironmentProvisionedResourcesResponsePrivate(ListEnvironmentProvisionedResourcesResponse * const q);

    void parseListEnvironmentProvisionedResourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEnvironmentProvisionedResourcesResponse)
    Q_DISABLE_COPY(ListEnvironmentProvisionedResourcesResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
