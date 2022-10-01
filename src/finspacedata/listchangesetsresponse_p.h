// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANGESETSRESPONSE_P_H
#define QTAWS_LISTCHANGESETSRESPONSE_P_H

#include "finspacedataresponse_p.h"

namespace QtAws {
namespace FinspaceData {

class ListChangesetsResponse;

class ListChangesetsResponsePrivate : public FinspaceDataResponsePrivate {

public:

    explicit ListChangesetsResponsePrivate(ListChangesetsResponse * const q);

    void parseListChangesetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListChangesetsResponse)
    Q_DISABLE_COPY(ListChangesetsResponsePrivate)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
