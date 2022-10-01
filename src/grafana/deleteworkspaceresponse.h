// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKSPACERESPONSE_H
#define QTAWS_DELETEWORKSPACERESPONSE_H

#include "grafanaresponse.h"
#include "deleteworkspacerequest.h"

namespace QtAws {
namespace Grafana {

class DeleteWorkspaceResponsePrivate;

class QTAWSGRAFANA_EXPORT DeleteWorkspaceResponse : public GrafanaResponse {
    Q_OBJECT

public:
    DeleteWorkspaceResponse(const DeleteWorkspaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteWorkspaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWorkspaceResponse)
    Q_DISABLE_COPY(DeleteWorkspaceResponse)

};

} // namespace Grafana
} // namespace QtAws

#endif
