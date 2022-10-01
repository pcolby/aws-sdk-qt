// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORIGINENDPOINTREQUEST_P_H
#define QTAWS_DESCRIBEORIGINENDPOINTREQUEST_P_H

#include "mediapackagerequest_p.h"
#include "describeoriginendpointrequest.h"

namespace QtAws {
namespace MediaPackage {

class DescribeOriginEndpointRequest;

class DescribeOriginEndpointRequestPrivate : public MediaPackageRequestPrivate {

public:
    DescribeOriginEndpointRequestPrivate(const MediaPackageRequest::Action action,
                                   DescribeOriginEndpointRequest * const q);
    DescribeOriginEndpointRequestPrivate(const DescribeOriginEndpointRequestPrivate &other,
                                   DescribeOriginEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeOriginEndpointRequest)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
