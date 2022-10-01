// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKSPACEAUTHENTICATIONRESPONSE_P_H
#define QTAWS_DESCRIBEWORKSPACEAUTHENTICATIONRESPONSE_P_H

#include "grafanaresponse_p.h"

namespace QtAws {
namespace Grafana {

class DescribeWorkspaceAuthenticationResponse;

class DescribeWorkspaceAuthenticationResponsePrivate : public GrafanaResponsePrivate {

public:

    explicit DescribeWorkspaceAuthenticationResponsePrivate(DescribeWorkspaceAuthenticationResponse * const q);

    void parseDescribeWorkspaceAuthenticationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeWorkspaceAuthenticationResponse)
    Q_DISABLE_COPY(DescribeWorkspaceAuthenticationResponsePrivate)

};

} // namespace Grafana
} // namespace QtAws

#endif
