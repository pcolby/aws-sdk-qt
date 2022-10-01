// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISTRIBUTIONLATESTCACHERESETREQUEST_H
#define QTAWS_GETDISTRIBUTIONLATESTCACHERESETREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetDistributionLatestCacheResetRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetDistributionLatestCacheResetRequest : public LightsailRequest {

public:
    GetDistributionLatestCacheResetRequest(const GetDistributionLatestCacheResetRequest &other);
    GetDistributionLatestCacheResetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDistributionLatestCacheResetRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
