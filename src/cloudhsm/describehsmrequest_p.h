// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHSMREQUEST_P_H
#define QTAWS_DESCRIBEHSMREQUEST_P_H

#include "cloudhsmrequest_p.h"
#include "describehsmrequest.h"

namespace QtAws {
namespace CloudHsm {

class DescribeHsmRequest;

class DescribeHsmRequestPrivate : public CloudHsmRequestPrivate {

public:
    DescribeHsmRequestPrivate(const CloudHsmRequest::Action action,
                                   DescribeHsmRequest * const q);
    DescribeHsmRequestPrivate(const DescribeHsmRequestPrivate &other,
                                   DescribeHsmRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeHsmRequest)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
