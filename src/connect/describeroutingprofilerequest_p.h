// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEROUTINGPROFILEREQUEST_P_H
#define QTAWS_DESCRIBEROUTINGPROFILEREQUEST_P_H

#include "connectrequest_p.h"
#include "describeroutingprofilerequest.h"

namespace QtAws {
namespace Connect {

class DescribeRoutingProfileRequest;

class DescribeRoutingProfileRequestPrivate : public ConnectRequestPrivate {

public:
    DescribeRoutingProfileRequestPrivate(const ConnectRequest::Action action,
                                   DescribeRoutingProfileRequest * const q);
    DescribeRoutingProfileRequestPrivate(const DescribeRoutingProfileRequestPrivate &other,
                                   DescribeRoutingProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRoutingProfileRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
