// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRIGGERSRESPONSE_P_H
#define QTAWS_LISTTRIGGERSRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class ListTriggersResponse;

class ListTriggersResponsePrivate : public GlueResponsePrivate {

public:

    explicit ListTriggersResponsePrivate(ListTriggersResponse * const q);

    void parseListTriggersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTriggersResponse)
    Q_DISABLE_COPY(ListTriggersResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
