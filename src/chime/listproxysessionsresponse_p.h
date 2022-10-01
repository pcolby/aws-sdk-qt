// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROXYSESSIONSRESPONSE_P_H
#define QTAWS_LISTPROXYSESSIONSRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class ListProxySessionsResponse;

class ListProxySessionsResponsePrivate : public ChimeResponsePrivate {

public:

    explicit ListProxySessionsResponsePrivate(ListProxySessionsResponse * const q);

    void parseListProxySessionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListProxySessionsResponse)
    Q_DISABLE_COPY(ListProxySessionsResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
