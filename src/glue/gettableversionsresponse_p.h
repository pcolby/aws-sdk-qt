// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTABLEVERSIONSRESPONSE_P_H
#define QTAWS_GETTABLEVERSIONSRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetTableVersionsResponse;

class GetTableVersionsResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetTableVersionsResponsePrivate(GetTableVersionsResponse * const q);

    void parseGetTableVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTableVersionsResponse)
    Q_DISABLE_COPY(GetTableVersionsResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
