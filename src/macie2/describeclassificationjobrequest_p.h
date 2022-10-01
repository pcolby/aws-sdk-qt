// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLASSIFICATIONJOBREQUEST_P_H
#define QTAWS_DESCRIBECLASSIFICATIONJOBREQUEST_P_H

#include "macie2request_p.h"
#include "describeclassificationjobrequest.h"

namespace QtAws {
namespace Macie2 {

class DescribeClassificationJobRequest;

class DescribeClassificationJobRequestPrivate : public Macie2RequestPrivate {

public:
    DescribeClassificationJobRequestPrivate(const Macie2Request::Action action,
                                   DescribeClassificationJobRequest * const q);
    DescribeClassificationJobRequestPrivate(const DescribeClassificationJobRequestPrivate &other,
                                   DescribeClassificationJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeClassificationJobRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
