// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESPONSEHEADERSPOLICYREQUEST_P_H
#define QTAWS_CREATERESPONSEHEADERSPOLICYREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "createresponseheaderspolicyrequest.h"

namespace QtAws {
namespace CloudFront {

class CreateResponseHeadersPolicyRequest;

class CreateResponseHeadersPolicyRequestPrivate : public CloudFrontRequestPrivate {

public:
    CreateResponseHeadersPolicyRequestPrivate(const CloudFrontRequest::Action action,
                                   CreateResponseHeadersPolicyRequest * const q);
    CreateResponseHeadersPolicyRequestPrivate(const CreateResponseHeadersPolicyRequestPrivate &other,
                                   CreateResponseHeadersPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateResponseHeadersPolicyRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
