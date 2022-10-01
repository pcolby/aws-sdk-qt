// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPARAMETERSREQUEST_P_H
#define QTAWS_DESCRIBEPARAMETERSREQUEST_P_H

#include "daxrequest_p.h"
#include "describeparametersrequest.h"

namespace QtAws {
namespace Dax {

class DescribeParametersRequest;

class DescribeParametersRequestPrivate : public DaxRequestPrivate {

public:
    DescribeParametersRequestPrivate(const DaxRequest::Action action,
                                   DescribeParametersRequest * const q);
    DescribeParametersRequestPrivate(const DescribeParametersRequestPrivate &other,
                                   DescribeParametersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeParametersRequest)

};

} // namespace Dax
} // namespace QtAws

#endif
