// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPONENTPROVISIONEDRESOURCESRESPONSE_P_H
#define QTAWS_LISTCOMPONENTPROVISIONEDRESOURCESRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class ListComponentProvisionedResourcesResponse;

class ListComponentProvisionedResourcesResponsePrivate : public ProtonResponsePrivate {

public:

    explicit ListComponentProvisionedResourcesResponsePrivate(ListComponentProvisionedResourcesResponse * const q);

    void parseListComponentProvisionedResourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListComponentProvisionedResourcesResponse)
    Q_DISABLE_COPY(ListComponentProvisionedResourcesResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
