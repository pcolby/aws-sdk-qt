// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKSPACEAPIKEYRESPONSE_P_H
#define QTAWS_DELETEWORKSPACEAPIKEYRESPONSE_P_H

#include "grafanaresponse_p.h"

namespace QtAws {
namespace Grafana {

class DeleteWorkspaceApiKeyResponse;

class DeleteWorkspaceApiKeyResponsePrivate : public GrafanaResponsePrivate {

public:

    explicit DeleteWorkspaceApiKeyResponsePrivate(DeleteWorkspaceApiKeyResponse * const q);

    void parseDeleteWorkspaceApiKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteWorkspaceApiKeyResponse)
    Q_DISABLE_COPY(DeleteWorkspaceApiKeyResponsePrivate)

};

} // namespace Grafana
} // namespace QtAws

#endif
