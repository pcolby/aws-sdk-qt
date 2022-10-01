// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTREAMSESSIONSRESPONSE_P_H
#define QTAWS_LISTSTREAMSESSIONSRESPONSE_P_H

#include "ivsresponse_p.h"

namespace QtAws {
namespace Ivs {

class ListStreamSessionsResponse;

class ListStreamSessionsResponsePrivate : public IvsResponsePrivate {

public:

    explicit ListStreamSessionsResponsePrivate(ListStreamSessionsResponse * const q);

    void parseListStreamSessionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListStreamSessionsResponse)
    Q_DISABLE_COPY(ListStreamSessionsResponsePrivate)

};

} // namespace Ivs
} // namespace QtAws

#endif
