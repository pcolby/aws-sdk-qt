// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESPONSEHEADERSPOLICYREQUEST_H
#define QTAWS_UPDATERESPONSEHEADERSPOLICYREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class UpdateResponseHeadersPolicyRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT UpdateResponseHeadersPolicyRequest : public CloudFrontRequest {

public:
    UpdateResponseHeadersPolicyRequest(const UpdateResponseHeadersPolicyRequest &other);
    UpdateResponseHeadersPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateResponseHeadersPolicyRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
