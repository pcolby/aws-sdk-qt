// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUPDATEREQUEST_P_H
#define QTAWS_DESCRIBEUPDATEREQUEST_P_H

#include "eksrequest_p.h"
#include "describeupdaterequest.h"

namespace QtAws {
namespace Eks {

class DescribeUpdateRequest;

class DescribeUpdateRequestPrivate : public EksRequestPrivate {

public:
    DescribeUpdateRequestPrivate(const EksRequest::Action action,
                                   DescribeUpdateRequest * const q);
    DescribeUpdateRequestPrivate(const DescribeUpdateRequestPrivate &other,
                                   DescribeUpdateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeUpdateRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
