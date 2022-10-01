// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKSPACERESPONSE_P_H
#define QTAWS_CREATEWORKSPACERESPONSE_P_H

#include "grafanaresponse_p.h"

namespace QtAws {
namespace Grafana {

class CreateWorkspaceResponse;

class CreateWorkspaceResponsePrivate : public GrafanaResponsePrivate {

public:

    explicit CreateWorkspaceResponsePrivate(CreateWorkspaceResponse * const q);

    void parseCreateWorkspaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateWorkspaceResponse)
    Q_DISABLE_COPY(CreateWorkspaceResponsePrivate)

};

} // namespace Grafana
} // namespace QtAws

#endif
