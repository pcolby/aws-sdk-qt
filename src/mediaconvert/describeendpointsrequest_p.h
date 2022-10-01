// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENDPOINTSREQUEST_P_H
#define QTAWS_DESCRIBEENDPOINTSREQUEST_P_H

#include "mediaconvertrequest_p.h"
#include "describeendpointsrequest.h"

namespace QtAws {
namespace MediaConvert {

class DescribeEndpointsRequest;

class DescribeEndpointsRequestPrivate : public MediaConvertRequestPrivate {

public:
    DescribeEndpointsRequestPrivate(const MediaConvertRequest::Action action,
                                   DescribeEndpointsRequest * const q);
    DescribeEndpointsRequestPrivate(const DescribeEndpointsRequestPrivate &other,
                                   DescribeEndpointsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEndpointsRequest)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
