// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONINSTANCEDETAILSREQUEST_P_H
#define QTAWS_DESCRIBEAPPLICATIONINSTANCEDETAILSREQUEST_P_H

#include "panoramarequest_p.h"
#include "describeapplicationinstancedetailsrequest.h"

namespace QtAws {
namespace Panorama {

class DescribeApplicationInstanceDetailsRequest;

class DescribeApplicationInstanceDetailsRequestPrivate : public PanoramaRequestPrivate {

public:
    DescribeApplicationInstanceDetailsRequestPrivate(const PanoramaRequest::Action action,
                                   DescribeApplicationInstanceDetailsRequest * const q);
    DescribeApplicationInstanceDetailsRequestPrivate(const DescribeApplicationInstanceDetailsRequestPrivate &other,
                                   DescribeApplicationInstanceDetailsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeApplicationInstanceDetailsRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
