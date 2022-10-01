// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTAINERSERVICEMETRICDATAREQUEST_P_H
#define QTAWS_GETCONTAINERSERVICEMETRICDATAREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getcontainerservicemetricdatarequest.h"

namespace QtAws {
namespace Lightsail {

class GetContainerServiceMetricDataRequest;

class GetContainerServiceMetricDataRequestPrivate : public LightsailRequestPrivate {

public:
    GetContainerServiceMetricDataRequestPrivate(const LightsailRequest::Action action,
                                   GetContainerServiceMetricDataRequest * const q);
    GetContainerServiceMetricDataRequestPrivate(const GetContainerServiceMetricDataRequestPrivate &other,
                                   GetContainerServiceMetricDataRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetContainerServiceMetricDataRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
