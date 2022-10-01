// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESPONSEHEADERSPOLICYREQUEST_H
#define QTAWS_GETRESPONSEHEADERSPOLICYREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class GetResponseHeadersPolicyRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT GetResponseHeadersPolicyRequest : public CloudFrontRequest {

public:
    GetResponseHeadersPolicyRequest(const GetResponseHeadersPolicyRequest &other);
    GetResponseHeadersPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResponseHeadersPolicyRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
