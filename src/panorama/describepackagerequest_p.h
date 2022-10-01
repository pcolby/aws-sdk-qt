// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPACKAGEREQUEST_P_H
#define QTAWS_DESCRIBEPACKAGEREQUEST_P_H

#include "panoramarequest_p.h"
#include "describepackagerequest.h"

namespace QtAws {
namespace Panorama {

class DescribePackageRequest;

class DescribePackageRequestPrivate : public PanoramaRequestPrivate {

public:
    DescribePackageRequestPrivate(const PanoramaRequest::Action action,
                                   DescribePackageRequest * const q);
    DescribePackageRequestPrivate(const DescribePackageRequestPrivate &other,
                                   DescribePackageRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePackageRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
