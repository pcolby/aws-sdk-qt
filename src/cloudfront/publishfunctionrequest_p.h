// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUBLISHFUNCTIONREQUEST_P_H
#define QTAWS_PUBLISHFUNCTIONREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "publishfunctionrequest.h"

namespace QtAws {
namespace CloudFront {

class PublishFunctionRequest;

class PublishFunctionRequestPrivate : public CloudFrontRequestPrivate {

public:
    PublishFunctionRequestPrivate(const CloudFrontRequest::Action action,
                                   PublishFunctionRequest * const q);
    PublishFunctionRequestPrivate(const PublishFunctionRequestPrivate &other,
                                   PublishFunctionRequest * const q);

private:
    Q_DECLARE_PUBLIC(PublishFunctionRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
