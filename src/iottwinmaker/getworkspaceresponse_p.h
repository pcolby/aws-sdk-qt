// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKSPACERESPONSE_P_H
#define QTAWS_GETWORKSPACERESPONSE_P_H

#include "iottwinmakerresponse_p.h"

namespace QtAws {
namespace IoTTwinMaker {

class GetWorkspaceResponse;

class GetWorkspaceResponsePrivate : public IoTTwinMakerResponsePrivate {

public:

    explicit GetWorkspaceResponsePrivate(GetWorkspaceResponse * const q);

    void parseGetWorkspaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetWorkspaceResponse)
    Q_DISABLE_COPY(GetWorkspaceResponsePrivate)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
