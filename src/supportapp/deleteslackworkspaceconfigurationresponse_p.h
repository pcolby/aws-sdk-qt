// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESLACKWORKSPACECONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETESLACKWORKSPACECONFIGURATIONRESPONSE_P_H

#include "supportappresponse_p.h"

namespace QtAws {
namespace SupportApp {

class DeleteSlackWorkspaceConfigurationResponse;

class DeleteSlackWorkspaceConfigurationResponsePrivate : public SupportAppResponsePrivate {

public:

    explicit DeleteSlackWorkspaceConfigurationResponsePrivate(DeleteSlackWorkspaceConfigurationResponse * const q);

    void parseDeleteSlackWorkspaceConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSlackWorkspaceConfigurationResponse)
    Q_DISABLE_COPY(DeleteSlackWorkspaceConfigurationResponsePrivate)

};

} // namespace SupportApp
} // namespace QtAws

#endif
