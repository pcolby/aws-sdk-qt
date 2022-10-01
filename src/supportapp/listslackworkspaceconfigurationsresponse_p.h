// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSLACKWORKSPACECONFIGURATIONSRESPONSE_P_H
#define QTAWS_LISTSLACKWORKSPACECONFIGURATIONSRESPONSE_P_H

#include "supportappresponse_p.h"

namespace QtAws {
namespace SupportApp {

class ListSlackWorkspaceConfigurationsResponse;

class ListSlackWorkspaceConfigurationsResponsePrivate : public SupportAppResponsePrivate {

public:

    explicit ListSlackWorkspaceConfigurationsResponsePrivate(ListSlackWorkspaceConfigurationsResponse * const q);

    void parseListSlackWorkspaceConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSlackWorkspaceConfigurationsResponse)
    Q_DISABLE_COPY(ListSlackWorkspaceConfigurationsResponsePrivate)

};

} // namespace SupportApp
} // namespace QtAws

#endif
