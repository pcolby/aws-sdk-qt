// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROJECTREQUEST_P_H
#define QTAWS_DESCRIBEPROJECTREQUEST_P_H

#include "lookoutvisionrequest_p.h"
#include "describeprojectrequest.h"

namespace QtAws {
namespace LookoutVision {

class DescribeProjectRequest;

class DescribeProjectRequestPrivate : public LookoutVisionRequestPrivate {

public:
    DescribeProjectRequestPrivate(const LookoutVisionRequest::Action action,
                                   DescribeProjectRequest * const q);
    DescribeProjectRequestPrivate(const DescribeProjectRequestPrivate &other,
                                   DescribeProjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeProjectRequest)

};

} // namespace LookoutVision
} // namespace QtAws

#endif
