// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICEPIPELINEPROVISIONEDRESOURCESRESPONSE_P_H
#define QTAWS_LISTSERVICEPIPELINEPROVISIONEDRESOURCESRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class ListServicePipelineProvisionedResourcesResponse;

class ListServicePipelineProvisionedResourcesResponsePrivate : public ProtonResponsePrivate {

public:

    explicit ListServicePipelineProvisionedResourcesResponsePrivate(ListServicePipelineProvisionedResourcesResponse * const q);

    void parseListServicePipelineProvisionedResourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListServicePipelineProvisionedResourcesResponse)
    Q_DISABLE_COPY(ListServicePipelineProvisionedResourcesResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
