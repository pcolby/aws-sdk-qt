// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPACKAGEIMPORTJOBREQUEST_P_H
#define QTAWS_DESCRIBEPACKAGEIMPORTJOBREQUEST_P_H

#include "panoramarequest_p.h"
#include "describepackageimportjobrequest.h"

namespace QtAws {
namespace Panorama {

class DescribePackageImportJobRequest;

class DescribePackageImportJobRequestPrivate : public PanoramaRequestPrivate {

public:
    DescribePackageImportJobRequestPrivate(const PanoramaRequest::Action action,
                                   DescribePackageImportJobRequest * const q);
    DescribePackageImportJobRequestPrivate(const DescribePackageImportJobRequestPrivate &other,
                                   DescribePackageImportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePackageImportJobRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
