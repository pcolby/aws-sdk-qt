// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATAFLOWGRAPHRESPONSE_P_H
#define QTAWS_GETDATAFLOWGRAPHRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetDataflowGraphResponse;

class GetDataflowGraphResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetDataflowGraphResponsePrivate(GetDataflowGraphResponse * const q);

    void parseGetDataflowGraphResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDataflowGraphResponse)
    Q_DISABLE_COPY(GetDataflowGraphResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
