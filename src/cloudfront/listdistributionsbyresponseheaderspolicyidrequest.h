// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISTRIBUTIONSBYRESPONSEHEADERSPOLICYIDREQUEST_H
#define QTAWS_LISTDISTRIBUTIONSBYRESPONSEHEADERSPOLICYIDREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class ListDistributionsByResponseHeadersPolicyIdRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT ListDistributionsByResponseHeadersPolicyIdRequest : public CloudFrontRequest {

public:
    ListDistributionsByResponseHeadersPolicyIdRequest(const ListDistributionsByResponseHeadersPolicyIdRequest &other);
    ListDistributionsByResponseHeadersPolicyIdRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDistributionsByResponseHeadersPolicyIdRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
