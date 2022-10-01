// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFUNCTIONREQUEST_P_H
#define QTAWS_DESCRIBEFUNCTIONREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "describefunctionrequest.h"

namespace QtAws {
namespace CloudFront {

class DescribeFunctionRequest;

class DescribeFunctionRequestPrivate : public CloudFrontRequestPrivate {

public:
    DescribeFunctionRequestPrivate(const CloudFrontRequest::Action action,
                                   DescribeFunctionRequest * const q);
    DescribeFunctionRequestPrivate(const DescribeFunctionRequestPrivate &other,
                                   DescribeFunctionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFunctionRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
