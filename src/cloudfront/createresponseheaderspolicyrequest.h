// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESPONSEHEADERSPOLICYREQUEST_H
#define QTAWS_CREATERESPONSEHEADERSPOLICYREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class CreateResponseHeadersPolicyRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT CreateResponseHeadersPolicyRequest : public CloudFrontRequest {

public:
    CreateResponseHeadersPolicyRequest(const CreateResponseHeadersPolicyRequest &other);
    CreateResponseHeadersPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateResponseHeadersPolicyRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
