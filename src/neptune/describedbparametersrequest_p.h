// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBPARAMETERSREQUEST_P_H
#define QTAWS_DESCRIBEDBPARAMETERSREQUEST_P_H

#include "neptunerequest_p.h"
#include "describedbparametersrequest.h"

namespace QtAws {
namespace Neptune {

class DescribeDBParametersRequest;

class DescribeDBParametersRequestPrivate : public NeptuneRequestPrivate {

public:
    DescribeDBParametersRequestPrivate(const NeptuneRequest::Action action,
                                   DescribeDBParametersRequest * const q);
    DescribeDBParametersRequestPrivate(const DescribeDBParametersRequestPrivate &other,
                                   DescribeDBParametersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDBParametersRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
