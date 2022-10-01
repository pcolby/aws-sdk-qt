// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISCOVEREDRESOURCECOUNTSREQUEST_H
#define QTAWS_GETDISCOVEREDRESOURCECOUNTSREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class GetDiscoveredResourceCountsRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT GetDiscoveredResourceCountsRequest : public ConfigServiceRequest {

public:
    GetDiscoveredResourceCountsRequest(const GetDiscoveredResourceCountsRequest &other);
    GetDiscoveredResourceCountsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDiscoveredResourceCountsRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
