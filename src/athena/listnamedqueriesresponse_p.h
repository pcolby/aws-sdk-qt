// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNAMEDQUERIESRESPONSE_P_H
#define QTAWS_LISTNAMEDQUERIESRESPONSE_P_H

#include "athenaresponse_p.h"

namespace QtAws {
namespace Athena {

class ListNamedQueriesResponse;

class ListNamedQueriesResponsePrivate : public AthenaResponsePrivate {

public:

    explicit ListNamedQueriesResponsePrivate(ListNamedQueriesResponse * const q);

    void parseListNamedQueriesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListNamedQueriesResponse)
    Q_DISABLE_COPY(ListNamedQueriesResponsePrivate)

};

} // namespace Athena
} // namespace QtAws

#endif
