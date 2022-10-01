// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESOURCEREQUEST_P_H
#define QTAWS_DESCRIBERESOURCEREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "describeresourcerequest.h"

namespace QtAws {
namespace LakeFormation {

class DescribeResourceRequest;

class DescribeResourceRequestPrivate : public LakeFormationRequestPrivate {

public:
    DescribeResourceRequestPrivate(const LakeFormationRequest::Action action,
                                   DescribeResourceRequest * const q);
    DescribeResourceRequestPrivate(const DescribeResourceRequestPrivate &other,
                                   DescribeResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeResourceRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
