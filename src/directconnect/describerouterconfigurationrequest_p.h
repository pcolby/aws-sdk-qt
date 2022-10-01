// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEROUTERCONFIGURATIONREQUEST_P_H
#define QTAWS_DESCRIBEROUTERCONFIGURATIONREQUEST_P_H

#include "directconnectrequest_p.h"
#include "describerouterconfigurationrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeRouterConfigurationRequest;

class DescribeRouterConfigurationRequestPrivate : public DirectConnectRequestPrivate {

public:
    DescribeRouterConfigurationRequestPrivate(const DirectConnectRequest::Action action,
                                   DescribeRouterConfigurationRequest * const q);
    DescribeRouterConfigurationRequestPrivate(const DescribeRouterConfigurationRequestPrivate &other,
                                   DescribeRouterConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRouterConfigurationRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
