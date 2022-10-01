// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTUDIOREQUEST_P_H
#define QTAWS_DESCRIBESTUDIOREQUEST_P_H

#include "emrrequest_p.h"
#include "describestudiorequest.h"

namespace QtAws {
namespace Emr {

class DescribeStudioRequest;

class DescribeStudioRequestPrivate : public EmrRequestPrivate {

public:
    DescribeStudioRequestPrivate(const EmrRequest::Action action,
                                   DescribeStudioRequest * const q);
    DescribeStudioRequestPrivate(const DescribeStudioRequestPrivate &other,
                                   DescribeStudioRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeStudioRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
