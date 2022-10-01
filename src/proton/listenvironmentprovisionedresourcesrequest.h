// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENVIRONMENTPROVISIONEDRESOURCESREQUEST_H
#define QTAWS_LISTENVIRONMENTPROVISIONEDRESOURCESREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class ListEnvironmentProvisionedResourcesRequestPrivate;

class QTAWSPROTON_EXPORT ListEnvironmentProvisionedResourcesRequest : public ProtonRequest {

public:
    ListEnvironmentProvisionedResourcesRequest(const ListEnvironmentProvisionedResourcesRequest &other);
    ListEnvironmentProvisionedResourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEnvironmentProvisionedResourcesRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
