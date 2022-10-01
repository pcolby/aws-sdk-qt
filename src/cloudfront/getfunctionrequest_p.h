// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFUNCTIONREQUEST_P_H
#define QTAWS_GETFUNCTIONREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "getfunctionrequest.h"

namespace QtAws {
namespace CloudFront {

class GetFunctionRequest;

class GetFunctionRequestPrivate : public CloudFrontRequestPrivate {

public:
    GetFunctionRequestPrivate(const CloudFrontRequest::Action action,
                                   GetFunctionRequest * const q);
    GetFunctionRequestPrivate(const GetFunctionRequestPrivate &other,
                                   GetFunctionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFunctionRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
