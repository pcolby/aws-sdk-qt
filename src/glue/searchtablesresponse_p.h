// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHTABLESRESPONSE_P_H
#define QTAWS_SEARCHTABLESRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class SearchTablesResponse;

class SearchTablesResponsePrivate : public GlueResponsePrivate {

public:

    explicit SearchTablesResponsePrivate(SearchTablesResponse * const q);

    void parseSearchTablesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchTablesResponse)
    Q_DISABLE_COPY(SearchTablesResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
