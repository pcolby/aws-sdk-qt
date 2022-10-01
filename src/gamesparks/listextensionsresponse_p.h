// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXTENSIONSRESPONSE_P_H
#define QTAWS_LISTEXTENSIONSRESPONSE_P_H

#include "gamesparksresponse_p.h"

namespace QtAws {
namespace GameSparks {

class ListExtensionsResponse;

class ListExtensionsResponsePrivate : public GameSparksResponsePrivate {

public:

    explicit ListExtensionsResponsePrivate(ListExtensionsResponse * const q);

    void parseListExtensionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListExtensionsResponse)
    Q_DISABLE_COPY(ListExtensionsResponsePrivate)

};

} // namespace GameSparks
} // namespace QtAws

#endif
