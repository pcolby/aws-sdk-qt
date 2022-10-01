// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICEINSTANCEPROVISIONEDRESOURCESRESPONSE_P_H
#define QTAWS_LISTSERVICEINSTANCEPROVISIONEDRESOURCESRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class ListServiceInstanceProvisionedResourcesResponse;

class ListServiceInstanceProvisionedResourcesResponsePrivate : public ProtonResponsePrivate {

public:

    explicit ListServiceInstanceProvisionedResourcesResponsePrivate(ListServiceInstanceProvisionedResourcesResponse * const q);

    void parseListServiceInstanceProvisionedResourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListServiceInstanceProvisionedResourcesResponse)
    Q_DISABLE_COPY(ListServiceInstanceProvisionedResourcesResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
