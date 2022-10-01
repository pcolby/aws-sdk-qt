// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSTANCESRESPONSE_H
#define QTAWS_LISTINSTANCESRESPONSE_H

#include "servicediscoveryresponse.h"
#include "listinstancesrequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class ListInstancesResponsePrivate;

class QTAWSSERVICEDISCOVERY_EXPORT ListInstancesResponse : public ServiceDiscoveryResponse {
    Q_OBJECT

public:
    ListInstancesResponse(const ListInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInstancesResponse)
    Q_DISABLE_COPY(ListInstancesResponse)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
