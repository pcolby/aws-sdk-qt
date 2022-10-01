// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSESSIONSRESPONSE_P_H
#define QTAWS_LISTSESSIONSRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class ListSessionsResponse;

class ListSessionsResponsePrivate : public GlueResponsePrivate {

public:

    explicit ListSessionsResponsePrivate(ListSessionsResponse * const q);

    void parseListSessionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSessionsResponse)
    Q_DISABLE_COPY(ListSessionsResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
