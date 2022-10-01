// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKSPACERESPONSE_H
#define QTAWS_UPDATEWORKSPACERESPONSE_H

#include "grafanaresponse.h"
#include "updateworkspacerequest.h"

namespace QtAws {
namespace Grafana {

class UpdateWorkspaceResponsePrivate;

class QTAWSGRAFANA_EXPORT UpdateWorkspaceResponse : public GrafanaResponse {
    Q_OBJECT

public:
    UpdateWorkspaceResponse(const UpdateWorkspaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateWorkspaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateWorkspaceResponse)
    Q_DISABLE_COPY(UpdateWorkspaceResponse)

};

} // namespace Grafana
} // namespace QtAws

#endif
