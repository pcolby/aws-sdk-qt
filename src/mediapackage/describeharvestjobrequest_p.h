// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHARVESTJOBREQUEST_P_H
#define QTAWS_DESCRIBEHARVESTJOBREQUEST_P_H

#include "mediapackagerequest_p.h"
#include "describeharvestjobrequest.h"

namespace QtAws {
namespace MediaPackage {

class DescribeHarvestJobRequest;

class DescribeHarvestJobRequestPrivate : public MediaPackageRequestPrivate {

public:
    DescribeHarvestJobRequestPrivate(const MediaPackageRequest::Action action,
                                   DescribeHarvestJobRequest * const q);
    DescribeHarvestJobRequestPrivate(const DescribeHarvestJobRequestPrivate &other,
                                   DescribeHarvestJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeHarvestJobRequest)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
