// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKSPACEAUTHENTICATIONRESPONSE_P_H
#define QTAWS_UPDATEWORKSPACEAUTHENTICATIONRESPONSE_P_H

#include "grafanaresponse_p.h"

namespace QtAws {
namespace Grafana {

class UpdateWorkspaceAuthenticationResponse;

class UpdateWorkspaceAuthenticationResponsePrivate : public GrafanaResponsePrivate {

public:

    explicit UpdateWorkspaceAuthenticationResponsePrivate(UpdateWorkspaceAuthenticationResponse * const q);

    void parseUpdateWorkspaceAuthenticationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateWorkspaceAuthenticationResponse)
    Q_DISABLE_COPY(UpdateWorkspaceAuthenticationResponsePrivate)

};

} // namespace Grafana
} // namespace QtAws

#endif
