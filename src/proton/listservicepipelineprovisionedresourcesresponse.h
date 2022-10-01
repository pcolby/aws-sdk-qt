// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICEPIPELINEPROVISIONEDRESOURCESRESPONSE_H
#define QTAWS_LISTSERVICEPIPELINEPROVISIONEDRESOURCESRESPONSE_H

#include "protonresponse.h"
#include "listservicepipelineprovisionedresourcesrequest.h"

namespace QtAws {
namespace Proton {

class ListServicePipelineProvisionedResourcesResponsePrivate;

class QTAWSPROTON_EXPORT ListServicePipelineProvisionedResourcesResponse : public ProtonResponse {
    Q_OBJECT

public:
    ListServicePipelineProvisionedResourcesResponse(const ListServicePipelineProvisionedResourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListServicePipelineProvisionedResourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListServicePipelineProvisionedResourcesResponse)
    Q_DISABLE_COPY(ListServicePipelineProvisionedResourcesResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
