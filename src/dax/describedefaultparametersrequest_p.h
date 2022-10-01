// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEFAULTPARAMETERSREQUEST_P_H
#define QTAWS_DESCRIBEDEFAULTPARAMETERSREQUEST_P_H

#include "daxrequest_p.h"
#include "describedefaultparametersrequest.h"

namespace QtAws {
namespace Dax {

class DescribeDefaultParametersRequest;

class DescribeDefaultParametersRequestPrivate : public DaxRequestPrivate {

public:
    DescribeDefaultParametersRequestPrivate(const DaxRequest::Action action,
                                   DescribeDefaultParametersRequest * const q);
    DescribeDefaultParametersRequestPrivate(const DescribeDefaultParametersRequestPrivate &other,
                                   DescribeDefaultParametersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDefaultParametersRequest)

};

} // namespace Dax
} // namespace QtAws

#endif
