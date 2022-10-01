// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKSPACERESPONSE_P_H
#define QTAWS_UPDATEWORKSPACERESPONSE_P_H

#include "iottwinmakerresponse_p.h"

namespace QtAws {
namespace IoTTwinMaker {

class UpdateWorkspaceResponse;

class UpdateWorkspaceResponsePrivate : public IoTTwinMakerResponsePrivate {

public:

    explicit UpdateWorkspaceResponsePrivate(UpdateWorkspaceResponse * const q);

    void parseUpdateWorkspaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateWorkspaceResponse)
    Q_DISABLE_COPY(UpdateWorkspaceResponsePrivate)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
