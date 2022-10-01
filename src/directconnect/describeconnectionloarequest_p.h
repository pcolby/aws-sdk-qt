// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTIONLOAREQUEST_P_H
#define QTAWS_DESCRIBECONNECTIONLOAREQUEST_P_H

#include "directconnectrequest_p.h"
#include "describeconnectionloarequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeConnectionLoaRequest;

class DescribeConnectionLoaRequestPrivate : public DirectConnectRequestPrivate {

public:
    DescribeConnectionLoaRequestPrivate(const DirectConnectRequest::Action action,
                                   DescribeConnectionLoaRequest * const q);
    DescribeConnectionLoaRequestPrivate(const DescribeConnectionLoaRequestPrivate &other,
                                   DescribeConnectionLoaRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeConnectionLoaRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
