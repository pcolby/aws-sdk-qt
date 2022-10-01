// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPOSITORIESREQUEST_P_H
#define QTAWS_DESCRIBEREPOSITORIESREQUEST_P_H

#include "ecrrequest_p.h"
#include "describerepositoriesrequest.h"

namespace QtAws {
namespace Ecr {

class DescribeRepositoriesRequest;

class DescribeRepositoriesRequestPrivate : public EcrRequestPrivate {

public:
    DescribeRepositoriesRequestPrivate(const EcrRequest::Action action,
                                   DescribeRepositoriesRequest * const q);
    DescribeRepositoriesRequestPrivate(const DescribeRepositoriesRequestPrivate &other,
                                   DescribeRepositoriesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRepositoriesRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
