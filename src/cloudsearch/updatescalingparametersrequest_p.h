// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESCALINGPARAMETERSREQUEST_P_H
#define QTAWS_UPDATESCALINGPARAMETERSREQUEST_P_H

#include "cloudsearchrequest_p.h"
#include "updatescalingparametersrequest.h"

namespace QtAws {
namespace CloudSearch {

class UpdateScalingParametersRequest;

class UpdateScalingParametersRequestPrivate : public CloudSearchRequestPrivate {

public:
    UpdateScalingParametersRequestPrivate(const CloudSearchRequest::Action action,
                                   UpdateScalingParametersRequest * const q);
    UpdateScalingParametersRequestPrivate(const UpdateScalingParametersRequestPrivate &other,
                                   UpdateScalingParametersRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateScalingParametersRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
