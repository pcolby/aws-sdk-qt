// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESPONSEHEADERSPOLICYCONFIGREQUEST_H
#define QTAWS_GETRESPONSEHEADERSPOLICYCONFIGREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class GetResponseHeadersPolicyConfigRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT GetResponseHeadersPolicyConfigRequest : public CloudFrontRequest {

public:
    GetResponseHeadersPolicyConfigRequest(const GetResponseHeadersPolicyConfigRequest &other);
    GetResponseHeadersPolicyConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResponseHeadersPolicyConfigRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
