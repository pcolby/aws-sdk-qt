// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONINSTANCEREQUEST_P_H
#define QTAWS_DESCRIBEAPPLICATIONINSTANCEREQUEST_P_H

#include "panoramarequest_p.h"
#include "describeapplicationinstancerequest.h"

namespace QtAws {
namespace Panorama {

class DescribeApplicationInstanceRequest;

class DescribeApplicationInstanceRequestPrivate : public PanoramaRequestPrivate {

public:
    DescribeApplicationInstanceRequestPrivate(const PanoramaRequest::Action action,
                                   DescribeApplicationInstanceRequest * const q);
    DescribeApplicationInstanceRequestPrivate(const DescribeApplicationInstanceRequestPrivate &other,
                                   DescribeApplicationInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeApplicationInstanceRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
