// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASETGROUPREQUEST_P_H
#define QTAWS_DESCRIBEDATASETGROUPREQUEST_P_H

#include "personalizerequest_p.h"
#include "describedatasetgrouprequest.h"

namespace QtAws {
namespace Personalize {

class DescribeDatasetGroupRequest;

class DescribeDatasetGroupRequestPrivate : public PersonalizeRequestPrivate {

public:
    DescribeDatasetGroupRequestPrivate(const PersonalizeRequest::Action action,
                                   DescribeDatasetGroupRequest * const q);
    DescribeDatasetGroupRequestPrivate(const DescribeDatasetGroupRequestPrivate &other,
                                   DescribeDatasetGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDatasetGroupRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
