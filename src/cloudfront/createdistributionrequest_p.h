// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDISTRIBUTIONREQUEST_P_H
#define QTAWS_CREATEDISTRIBUTIONREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "createdistributionrequest.h"

namespace QtAws {
namespace CloudFront {

class CreateDistributionRequest;

class CreateDistributionRequestPrivate : public CloudFrontRequestPrivate {

public:
    CreateDistributionRequestPrivate(const CloudFrontRequest::Action action,
                                   CreateDistributionRequest * const q);
    CreateDistributionRequestPrivate(const CreateDistributionRequestPrivate &other,
                                   CreateDistributionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDistributionRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
