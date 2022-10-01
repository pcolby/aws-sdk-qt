// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESPONSEHEADERSPOLICYREQUEST_P_H
#define QTAWS_UPDATERESPONSEHEADERSPOLICYREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "updateresponseheaderspolicyrequest.h"

namespace QtAws {
namespace CloudFront {

class UpdateResponseHeadersPolicyRequest;

class UpdateResponseHeadersPolicyRequestPrivate : public CloudFrontRequestPrivate {

public:
    UpdateResponseHeadersPolicyRequestPrivate(const CloudFrontRequest::Action action,
                                   UpdateResponseHeadersPolicyRequest * const q);
    UpdateResponseHeadersPolicyRequestPrivate(const UpdateResponseHeadersPolicyRequestPrivate &other,
                                   UpdateResponseHeadersPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateResponseHeadersPolicyRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
