// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINVALIDATIONREQUEST_P_H
#define QTAWS_GETINVALIDATIONREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "getinvalidationrequest.h"

namespace QtAws {
namespace CloudFront {

class GetInvalidationRequest;

class GetInvalidationRequestPrivate : public CloudFrontRequestPrivate {

public:
    GetInvalidationRequestPrivate(const CloudFrontRequest::Action action,
                                   GetInvalidationRequest * const q);
    GetInvalidationRequestPrivate(const GetInvalidationRequestPrivate &other,
                                   GetInvalidationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetInvalidationRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
