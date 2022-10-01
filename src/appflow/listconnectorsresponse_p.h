// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONNECTORSRESPONSE_P_H
#define QTAWS_LISTCONNECTORSRESPONSE_P_H

#include "appflowresponse_p.h"

namespace QtAws {
namespace Appflow {

class ListConnectorsResponse;

class ListConnectorsResponsePrivate : public AppflowResponsePrivate {

public:

    explicit ListConnectorsResponsePrivate(ListConnectorsResponse * const q);

    void parseListConnectorsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListConnectorsResponse)
    Q_DISABLE_COPY(ListConnectorsResponsePrivate)

};

} // namespace Appflow
} // namespace QtAws

#endif
