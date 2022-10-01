// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERUNTIMEVERSIONSREQUEST_P_H
#define QTAWS_DESCRIBERUNTIMEVERSIONSREQUEST_P_H

#include "syntheticsrequest_p.h"
#include "describeruntimeversionsrequest.h"

namespace QtAws {
namespace Synthetics {

class DescribeRuntimeVersionsRequest;

class DescribeRuntimeVersionsRequestPrivate : public SyntheticsRequestPrivate {

public:
    DescribeRuntimeVersionsRequestPrivate(const SyntheticsRequest::Action action,
                                   DescribeRuntimeVersionsRequest * const q);
    DescribeRuntimeVersionsRequestPrivate(const DescribeRuntimeVersionsRequestPrivate &other,
                                   DescribeRuntimeVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRuntimeVersionsRequest)

};

} // namespace Synthetics
} // namespace QtAws

#endif
