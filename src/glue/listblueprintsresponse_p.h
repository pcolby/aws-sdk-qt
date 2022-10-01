// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBLUEPRINTSRESPONSE_P_H
#define QTAWS_LISTBLUEPRINTSRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class ListBlueprintsResponse;

class ListBlueprintsResponsePrivate : public GlueResponsePrivate {

public:

    explicit ListBlueprintsResponsePrivate(ListBlueprintsResponse * const q);

    void parseListBlueprintsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBlueprintsResponse)
    Q_DISABLE_COPY(ListBlueprintsResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
