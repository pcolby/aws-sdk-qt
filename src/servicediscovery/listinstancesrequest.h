// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSTANCESREQUEST_H
#define QTAWS_LISTINSTANCESREQUEST_H

#include "servicediscoveryrequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class ListInstancesRequestPrivate;

class QTAWSSERVICEDISCOVERY_EXPORT ListInstancesRequest : public ServiceDiscoveryRequest {

public:
    ListInstancesRequest(const ListInstancesRequest &other);
    ListInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInstancesRequest)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
