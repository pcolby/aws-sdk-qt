// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPINSTANCEREQUEST_P_H
#define QTAWS_DESCRIBEAPPINSTANCEREQUEST_P_H

#include "chimerequest_p.h"
#include "describeappinstancerequest.h"

namespace QtAws {
namespace Chime {

class DescribeAppInstanceRequest;

class DescribeAppInstanceRequestPrivate : public ChimeRequestPrivate {

public:
    DescribeAppInstanceRequestPrivate(const ChimeRequest::Action action,
                                   DescribeAppInstanceRequest * const q);
    DescribeAppInstanceRequestPrivate(const DescribeAppInstanceRequestPrivate &other,
                                   DescribeAppInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAppInstanceRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
