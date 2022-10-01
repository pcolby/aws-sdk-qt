// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISCOVEREDRESOURCECOUNTSRESPONSE_H
#define QTAWS_GETDISCOVEREDRESOURCECOUNTSRESPONSE_H

#include "configserviceresponse.h"
#include "getdiscoveredresourcecountsrequest.h"

namespace QtAws {
namespace ConfigService {

class GetDiscoveredResourceCountsResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT GetDiscoveredResourceCountsResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    GetDiscoveredResourceCountsResponse(const GetDiscoveredResourceCountsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDiscoveredResourceCountsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDiscoveredResourceCountsResponse)
    Q_DISABLE_COPY(GetDiscoveredResourceCountsResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
