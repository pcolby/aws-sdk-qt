// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXTENSIONVERSIONSRESPONSE_P_H
#define QTAWS_LISTEXTENSIONVERSIONSRESPONSE_P_H

#include "gamesparksresponse_p.h"

namespace QtAws {
namespace GameSparks {

class ListExtensionVersionsResponse;

class ListExtensionVersionsResponsePrivate : public GameSparksResponsePrivate {

public:

    explicit ListExtensionVersionsResponsePrivate(ListExtensionVersionsResponse * const q);

    void parseListExtensionVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListExtensionVersionsResponse)
    Q_DISABLE_COPY(ListExtensionVersionsResponsePrivate)

};

} // namespace GameSparks
} // namespace QtAws

#endif
