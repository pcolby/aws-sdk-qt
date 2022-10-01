// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISTRIBUTIONSBYCACHEPOLICYIDREQUEST_H
#define QTAWS_LISTDISTRIBUTIONSBYCACHEPOLICYIDREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class ListDistributionsByCachePolicyIdRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT ListDistributionsByCachePolicyIdRequest : public CloudFrontRequest {

public:
    ListDistributionsByCachePolicyIdRequest(const ListDistributionsByCachePolicyIdRequest &other);
    ListDistributionsByCachePolicyIdRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDistributionsByCachePolicyIdRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
