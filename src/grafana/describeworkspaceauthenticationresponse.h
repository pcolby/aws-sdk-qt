// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKSPACEAUTHENTICATIONRESPONSE_H
#define QTAWS_DESCRIBEWORKSPACEAUTHENTICATIONRESPONSE_H

#include "grafanaresponse.h"
#include "describeworkspaceauthenticationrequest.h"

namespace QtAws {
namespace Grafana {

class DescribeWorkspaceAuthenticationResponsePrivate;

class QTAWSGRAFANA_EXPORT DescribeWorkspaceAuthenticationResponse : public GrafanaResponse {
    Q_OBJECT

public:
    DescribeWorkspaceAuthenticationResponse(const DescribeWorkspaceAuthenticationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeWorkspaceAuthenticationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWorkspaceAuthenticationResponse)
    Q_DISABLE_COPY(DescribeWorkspaceAuthenticationResponse)

};

} // namespace Grafana
} // namespace QtAws

#endif
