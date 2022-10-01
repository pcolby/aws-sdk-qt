// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKSPACESRESPONSE_H
#define QTAWS_LISTWORKSPACESRESPONSE_H

#include "grafanaresponse.h"
#include "listworkspacesrequest.h"

namespace QtAws {
namespace Grafana {

class ListWorkspacesResponsePrivate;

class QTAWSGRAFANA_EXPORT ListWorkspacesResponse : public GrafanaResponse {
    Q_OBJECT

public:
    ListWorkspacesResponse(const ListWorkspacesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListWorkspacesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWorkspacesResponse)
    Q_DISABLE_COPY(ListWorkspacesResponse)

};

} // namespace Grafana
} // namespace QtAws

#endif
