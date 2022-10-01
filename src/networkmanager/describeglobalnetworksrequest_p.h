// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGLOBALNETWORKSREQUEST_P_H
#define QTAWS_DESCRIBEGLOBALNETWORKSREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "describeglobalnetworksrequest.h"

namespace QtAws {
namespace NetworkManager {

class DescribeGlobalNetworksRequest;

class DescribeGlobalNetworksRequestPrivate : public NetworkManagerRequestPrivate {

public:
    DescribeGlobalNetworksRequestPrivate(const NetworkManagerRequest::Action action,
                                   DescribeGlobalNetworksRequest * const q);
    DescribeGlobalNetworksRequestPrivate(const DescribeGlobalNetworksRequestPrivate &other,
                                   DescribeGlobalNetworksRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeGlobalNetworksRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
