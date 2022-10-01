// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINTERCONNECTLOAREQUEST_P_H
#define QTAWS_DESCRIBEINTERCONNECTLOAREQUEST_P_H

#include "directconnectrequest_p.h"
#include "describeinterconnectloarequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeInterconnectLoaRequest;

class DescribeInterconnectLoaRequestPrivate : public DirectConnectRequestPrivate {

public:
    DescribeInterconnectLoaRequestPrivate(const DirectConnectRequest::Action action,
                                   DescribeInterconnectLoaRequest * const q);
    DescribeInterconnectLoaRequestPrivate(const DescribeInterconnectLoaRequestPrivate &other,
                                   DescribeInterconnectLoaRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInterconnectLoaRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
