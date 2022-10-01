// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESPONSEHEADERSPOLICYREQUEST_P_H
#define QTAWS_DELETERESPONSEHEADERSPOLICYREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "deleteresponseheaderspolicyrequest.h"

namespace QtAws {
namespace CloudFront {

class DeleteResponseHeadersPolicyRequest;

class DeleteResponseHeadersPolicyRequestPrivate : public CloudFrontRequestPrivate {

public:
    DeleteResponseHeadersPolicyRequestPrivate(const CloudFrontRequest::Action action,
                                   DeleteResponseHeadersPolicyRequest * const q);
    DeleteResponseHeadersPolicyRequestPrivate(const DeleteResponseHeadersPolicyRequestPrivate &other,
                                   DeleteResponseHeadersPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteResponseHeadersPolicyRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
