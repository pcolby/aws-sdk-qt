// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORIGINREQUESTPOLICIESREQUEST_H
#define QTAWS_LISTORIGINREQUESTPOLICIESREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class ListOriginRequestPoliciesRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT ListOriginRequestPoliciesRequest : public CloudFrontRequest {

public:
    ListOriginRequestPoliciesRequest(const ListOriginRequestPoliciesRequest &other);
    ListOriginRequestPoliciesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOriginRequestPoliciesRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
