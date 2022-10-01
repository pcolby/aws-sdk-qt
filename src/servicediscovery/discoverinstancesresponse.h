// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCOVERINSTANCESRESPONSE_H
#define QTAWS_DISCOVERINSTANCESRESPONSE_H

#include "servicediscoveryresponse.h"
#include "discoverinstancesrequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class DiscoverInstancesResponsePrivate;

class QTAWSSERVICEDISCOVERY_EXPORT DiscoverInstancesResponse : public ServiceDiscoveryResponse {
    Q_OBJECT

public:
    DiscoverInstancesResponse(const DiscoverInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DiscoverInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DiscoverInstancesResponse)
    Q_DISABLE_COPY(DiscoverInstancesResponse)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
