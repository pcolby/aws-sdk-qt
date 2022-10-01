// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOPERATIONSRESPONSE_H
#define QTAWS_LISTOPERATIONSRESPONSE_H

#include "servicediscoveryresponse.h"
#include "listoperationsrequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class ListOperationsResponsePrivate;

class QTAWSSERVICEDISCOVERY_EXPORT ListOperationsResponse : public ServiceDiscoveryResponse {
    Q_OBJECT

public:
    ListOperationsResponse(const ListOperationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListOperationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOperationsResponse)
    Q_DISABLE_COPY(ListOperationsResponse)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
