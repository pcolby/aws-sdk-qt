// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVIRTUALINTERFACESREQUEST_P_H
#define QTAWS_DESCRIBEVIRTUALINTERFACESREQUEST_P_H

#include "directconnectrequest_p.h"
#include "describevirtualinterfacesrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeVirtualInterfacesRequest;

class DescribeVirtualInterfacesRequestPrivate : public DirectConnectRequestPrivate {

public:
    DescribeVirtualInterfacesRequestPrivate(const DirectConnectRequest::Action action,
                                   DescribeVirtualInterfacesRequest * const q);
    DescribeVirtualInterfacesRequestPrivate(const DescribeVirtualInterfacesRequestPrivate &other,
                                   DescribeVirtualInterfacesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeVirtualInterfacesRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
