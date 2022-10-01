// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKSPACEAUTHENTICATIONRESPONSE_H
#define QTAWS_UPDATEWORKSPACEAUTHENTICATIONRESPONSE_H

#include "grafanaresponse.h"
#include "updateworkspaceauthenticationrequest.h"

namespace QtAws {
namespace Grafana {

class UpdateWorkspaceAuthenticationResponsePrivate;

class QTAWSGRAFANA_EXPORT UpdateWorkspaceAuthenticationResponse : public GrafanaResponse {
    Q_OBJECT

public:
    UpdateWorkspaceAuthenticationResponse(const UpdateWorkspaceAuthenticationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateWorkspaceAuthenticationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateWorkspaceAuthenticationResponse)
    Q_DISABLE_COPY(UpdateWorkspaceAuthenticationResponse)

};

} // namespace Grafana
} // namespace QtAws

#endif
