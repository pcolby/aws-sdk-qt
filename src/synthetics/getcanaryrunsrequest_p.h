// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCANARYRUNSREQUEST_P_H
#define QTAWS_GETCANARYRUNSREQUEST_P_H

#include "syntheticsrequest_p.h"
#include "getcanaryrunsrequest.h"

namespace QtAws {
namespace Synthetics {

class GetCanaryRunsRequest;

class GetCanaryRunsRequestPrivate : public SyntheticsRequestPrivate {

public:
    GetCanaryRunsRequestPrivate(const SyntheticsRequest::Action action,
                                   GetCanaryRunsRequest * const q);
    GetCanaryRunsRequestPrivate(const GetCanaryRunsRequestPrivate &other,
                                   GetCanaryRunsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCanaryRunsRequest)

};

} // namespace Synthetics
} // namespace QtAws

#endif
