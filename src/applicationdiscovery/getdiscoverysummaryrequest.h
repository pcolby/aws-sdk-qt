// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISCOVERYSUMMARYREQUEST_H
#define QTAWS_GETDISCOVERYSUMMARYREQUEST_H

#include "applicationdiscoveryrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class GetDiscoverySummaryRequestPrivate;

class QTAWSAPPLICATIONDISCOVERY_EXPORT GetDiscoverySummaryRequest : public ApplicationDiscoveryRequest {

public:
    GetDiscoverySummaryRequest(const GetDiscoverySummaryRequest &other);
    GetDiscoverySummaryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDiscoverySummaryRequest)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
