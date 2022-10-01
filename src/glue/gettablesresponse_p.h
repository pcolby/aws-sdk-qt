// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTABLESRESPONSE_P_H
#define QTAWS_GETTABLESRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetTablesResponse;

class GetTablesResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetTablesResponsePrivate(GetTablesResponse * const q);

    void parseGetTablesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTablesResponse)
    Q_DISABLE_COPY(GetTablesResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
