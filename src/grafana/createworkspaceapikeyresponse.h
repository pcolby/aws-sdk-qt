// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKSPACEAPIKEYRESPONSE_H
#define QTAWS_CREATEWORKSPACEAPIKEYRESPONSE_H

#include "grafanaresponse.h"
#include "createworkspaceapikeyrequest.h"

namespace QtAws {
namespace Grafana {

class CreateWorkspaceApiKeyResponsePrivate;

class QTAWSGRAFANA_EXPORT CreateWorkspaceApiKeyResponse : public GrafanaResponse {
    Q_OBJECT

public:
    CreateWorkspaceApiKeyResponse(const CreateWorkspaceApiKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateWorkspaceApiKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWorkspaceApiKeyResponse)
    Q_DISABLE_COPY(CreateWorkspaceApiKeyResponse)

};

} // namespace Grafana
} // namespace QtAws

#endif
