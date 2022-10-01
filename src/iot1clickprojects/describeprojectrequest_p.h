// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROJECTREQUEST_P_H
#define QTAWS_DESCRIBEPROJECTREQUEST_P_H

#include "iot1clickprojectsrequest_p.h"
#include "describeprojectrequest.h"

namespace QtAws {
namespace IoT1ClickProjects {

class DescribeProjectRequest;

class DescribeProjectRequestPrivate : public IoT1ClickProjectsRequestPrivate {

public:
    DescribeProjectRequestPrivate(const IoT1ClickProjectsRequest::Action action,
                                   DescribeProjectRequest * const q);
    DescribeProjectRequestPrivate(const DescribeProjectRequestPrivate &other,
                                   DescribeProjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeProjectRequest)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
