// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKSPACEAPIKEYRESPONSE_H
#define QTAWS_DELETEWORKSPACEAPIKEYRESPONSE_H

#include "grafanaresponse.h"
#include "deleteworkspaceapikeyrequest.h"

namespace QtAws {
namespace Grafana {

class DeleteWorkspaceApiKeyResponsePrivate;

class QTAWSGRAFANA_EXPORT DeleteWorkspaceApiKeyResponse : public GrafanaResponse {
    Q_OBJECT

public:
    DeleteWorkspaceApiKeyResponse(const DeleteWorkspaceApiKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteWorkspaceApiKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWorkspaceApiKeyResponse)
    Q_DISABLE_COPY(DeleteWorkspaceApiKeyResponse)

};

} // namespace Grafana
} // namespace QtAws

#endif
