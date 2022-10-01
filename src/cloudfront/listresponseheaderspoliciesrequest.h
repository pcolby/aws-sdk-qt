// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESPONSEHEADERSPOLICIESREQUEST_H
#define QTAWS_LISTRESPONSEHEADERSPOLICIESREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class ListResponseHeadersPoliciesRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT ListResponseHeadersPoliciesRequest : public CloudFrontRequest {

public:
    ListResponseHeadersPoliciesRequest(const ListResponseHeadersPoliciesRequest &other);
    ListResponseHeadersPoliciesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResponseHeadersPoliciesRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
