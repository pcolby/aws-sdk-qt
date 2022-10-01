// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACTIVITYREQUEST_P_H
#define QTAWS_DESCRIBEACTIVITYREQUEST_P_H

#include "sfnrequest_p.h"
#include "describeactivityrequest.h"

namespace QtAws {
namespace Sfn {

class DescribeActivityRequest;

class DescribeActivityRequestPrivate : public SfnRequestPrivate {

public:
    DescribeActivityRequestPrivate(const SfnRequest::Action action,
                                   DescribeActivityRequest * const q);
    DescribeActivityRequestPrivate(const DescribeActivityRequestPrivate &other,
                                   DescribeActivityRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeActivityRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif
