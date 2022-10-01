// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKSPACESRESPONSE_P_H
#define QTAWS_LISTWORKSPACESRESPONSE_P_H

#include "iottwinmakerresponse_p.h"

namespace QtAws {
namespace IoTTwinMaker {

class ListWorkspacesResponse;

class ListWorkspacesResponsePrivate : public IoTTwinMakerResponsePrivate {

public:

    explicit ListWorkspacesResponsePrivate(ListWorkspacesResponse * const q);

    void parseListWorkspacesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListWorkspacesResponse)
    Q_DISABLE_COPY(ListWorkspacesResponsePrivate)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
