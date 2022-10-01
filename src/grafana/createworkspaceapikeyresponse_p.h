// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKSPACEAPIKEYRESPONSE_P_H
#define QTAWS_CREATEWORKSPACEAPIKEYRESPONSE_P_H

#include "grafanaresponse_p.h"

namespace QtAws {
namespace Grafana {

class CreateWorkspaceApiKeyResponse;

class CreateWorkspaceApiKeyResponsePrivate : public GrafanaResponsePrivate {

public:

    explicit CreateWorkspaceApiKeyResponsePrivate(CreateWorkspaceApiKeyResponse * const q);

    void parseCreateWorkspaceApiKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateWorkspaceApiKeyResponse)
    Q_DISABLE_COPY(CreateWorkspaceApiKeyResponsePrivate)

};

} // namespace Grafana
} // namespace QtAws

#endif
