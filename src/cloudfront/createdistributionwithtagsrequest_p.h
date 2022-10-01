// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDISTRIBUTIONWITHTAGSREQUEST_P_H
#define QTAWS_CREATEDISTRIBUTIONWITHTAGSREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "createdistributionwithtagsrequest.h"

namespace QtAws {
namespace CloudFront {

class CreateDistributionWithTagsRequest;

class CreateDistributionWithTagsRequestPrivate : public CloudFrontRequestPrivate {

public:
    CreateDistributionWithTagsRequestPrivate(const CloudFrontRequest::Action action,
                                   CreateDistributionWithTagsRequest * const q);
    CreateDistributionWithTagsRequestPrivate(const CreateDistributionWithTagsRequestPrivate &other,
                                   CreateDistributionWithTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDistributionWithTagsRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
