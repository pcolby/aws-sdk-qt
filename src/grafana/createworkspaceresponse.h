// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKSPACERESPONSE_H
#define QTAWS_CREATEWORKSPACERESPONSE_H

#include "grafanaresponse.h"
#include "createworkspacerequest.h"

namespace QtAws {
namespace Grafana {

class CreateWorkspaceResponsePrivate;

class QTAWSGRAFANA_EXPORT CreateWorkspaceResponse : public GrafanaResponse {
    Q_OBJECT

public:
    CreateWorkspaceResponse(const CreateWorkspaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateWorkspaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWorkspaceResponse)
    Q_DISABLE_COPY(CreateWorkspaceResponse)

};

} // namespace Grafana
} // namespace QtAws

#endif
