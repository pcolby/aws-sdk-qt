// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISTRIBUTIONSBYREALTIMELOGCONFIGREQUEST_H
#define QTAWS_LISTDISTRIBUTIONSBYREALTIMELOGCONFIGREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class ListDistributionsByRealtimeLogConfigRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT ListDistributionsByRealtimeLogConfigRequest : public CloudFrontRequest {

public:
    ListDistributionsByRealtimeLogConfigRequest(const ListDistributionsByRealtimeLogConfigRequest &other);
    ListDistributionsByRealtimeLogConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDistributionsByRealtimeLogConfigRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
