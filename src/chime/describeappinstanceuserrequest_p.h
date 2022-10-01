// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPINSTANCEUSERREQUEST_P_H
#define QTAWS_DESCRIBEAPPINSTANCEUSERREQUEST_P_H

#include "chimerequest_p.h"
#include "describeappinstanceuserrequest.h"

namespace QtAws {
namespace Chime {

class DescribeAppInstanceUserRequest;

class DescribeAppInstanceUserRequestPrivate : public ChimeRequestPrivate {

public:
    DescribeAppInstanceUserRequestPrivate(const ChimeRequest::Action action,
                                   DescribeAppInstanceUserRequest * const q);
    DescribeAppInstanceUserRequestPrivate(const DescribeAppInstanceUserRequestPrivate &other,
                                   DescribeAppInstanceUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAppInstanceUserRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
