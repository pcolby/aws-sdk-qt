// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICEPIPELINEPROVISIONEDRESOURCESREQUEST_H
#define QTAWS_LISTSERVICEPIPELINEPROVISIONEDRESOURCESREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class ListServicePipelineProvisionedResourcesRequestPrivate;

class QTAWSPROTON_EXPORT ListServicePipelineProvisionedResourcesRequest : public ProtonRequest {

public:
    ListServicePipelineProvisionedResourcesRequest(const ListServicePipelineProvisionedResourcesRequest &other);
    ListServicePipelineProvisionedResourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListServicePipelineProvisionedResourcesRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
