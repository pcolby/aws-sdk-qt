// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOAREQUEST_P_H
#define QTAWS_DESCRIBELOAREQUEST_P_H

#include "directconnectrequest_p.h"
#include "describeloarequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeLoaRequest;

class DescribeLoaRequestPrivate : public DirectConnectRequestPrivate {

public:
    DescribeLoaRequestPrivate(const DirectConnectRequest::Action action,
                                   DescribeLoaRequest * const q);
    DescribeLoaRequestPrivate(const DescribeLoaRequestPrivate &other,
                                   DescribeLoaRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLoaRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
