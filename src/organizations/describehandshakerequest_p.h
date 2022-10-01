// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHANDSHAKEREQUEST_P_H
#define QTAWS_DESCRIBEHANDSHAKEREQUEST_P_H

#include "organizationsrequest_p.h"
#include "describehandshakerequest.h"

namespace QtAws {
namespace Organizations {

class DescribeHandshakeRequest;

class DescribeHandshakeRequestPrivate : public OrganizationsRequestPrivate {

public:
    DescribeHandshakeRequestPrivate(const OrganizationsRequest::Action action,
                                   DescribeHandshakeRequest * const q);
    DescribeHandshakeRequestPrivate(const DescribeHandshakeRequestPrivate &other,
                                   DescribeHandshakeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeHandshakeRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
