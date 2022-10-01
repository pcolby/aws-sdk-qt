// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKSPACEAUTHENTICATIONREQUEST_P_H
#define QTAWS_DESCRIBEWORKSPACEAUTHENTICATIONREQUEST_P_H

#include "grafanarequest_p.h"
#include "describeworkspaceauthenticationrequest.h"

namespace QtAws {
namespace Grafana {

class DescribeWorkspaceAuthenticationRequest;

class DescribeWorkspaceAuthenticationRequestPrivate : public GrafanaRequestPrivate {

public:
    DescribeWorkspaceAuthenticationRequestPrivate(const GrafanaRequest::Action action,
                                   DescribeWorkspaceAuthenticationRequest * const q);
    DescribeWorkspaceAuthenticationRequestPrivate(const DescribeWorkspaceAuthenticationRequestPrivate &other,
                                   DescribeWorkspaceAuthenticationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeWorkspaceAuthenticationRequest)

};

} // namespace Grafana
} // namespace QtAws

#endif
