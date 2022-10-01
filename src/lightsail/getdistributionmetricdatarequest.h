// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISTRIBUTIONMETRICDATAREQUEST_H
#define QTAWS_GETDISTRIBUTIONMETRICDATAREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetDistributionMetricDataRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetDistributionMetricDataRequest : public LightsailRequest {

public:
    GetDistributionMetricDataRequest(const GetDistributionMetricDataRequest &other);
    GetDistributionMetricDataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDistributionMetricDataRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
