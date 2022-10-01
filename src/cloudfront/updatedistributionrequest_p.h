// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDISTRIBUTIONREQUEST_P_H
#define QTAWS_UPDATEDISTRIBUTIONREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "updatedistributionrequest.h"

namespace QtAws {
namespace CloudFront {

class UpdateDistributionRequest;

class UpdateDistributionRequestPrivate : public CloudFrontRequestPrivate {

public:
    UpdateDistributionRequestPrivate(const CloudFrontRequest::Action action,
                                   UpdateDistributionRequest * const q);
    UpdateDistributionRequestPrivate(const UpdateDistributionRequestPrivate &other,
                                   UpdateDistributionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDistributionRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
