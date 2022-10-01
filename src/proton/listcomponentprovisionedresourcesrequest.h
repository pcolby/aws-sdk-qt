// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPONENTPROVISIONEDRESOURCESREQUEST_H
#define QTAWS_LISTCOMPONENTPROVISIONEDRESOURCESREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class ListComponentProvisionedResourcesRequestPrivate;

class QTAWSPROTON_EXPORT ListComponentProvisionedResourcesRequest : public ProtonRequest {

public:
    ListComponentProvisionedResourcesRequest(const ListComponentProvisionedResourcesRequest &other);
    ListComponentProvisionedResourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListComponentProvisionedResourcesRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
