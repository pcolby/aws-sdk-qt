// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISTRIBUTIONSBYORIGINREQUESTPOLICYIDREQUEST_H
#define QTAWS_LISTDISTRIBUTIONSBYORIGINREQUESTPOLICYIDREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class ListDistributionsByOriginRequestPolicyIdRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT ListDistributionsByOriginRequestPolicyIdRequest : public CloudFrontRequest {

public:
    ListDistributionsByOriginRequestPolicyIdRequest(const ListDistributionsByOriginRequestPolicyIdRequest &other);
    ListDistributionsByOriginRequestPolicyIdRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDistributionsByOriginRequestPolicyIdRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
