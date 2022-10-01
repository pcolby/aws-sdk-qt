// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRIGGERSRESPONSE_P_H
#define QTAWS_GETTRIGGERSRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetTriggersResponse;

class GetTriggersResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetTriggersResponsePrivate(GetTriggersResponse * const q);

    void parseGetTriggersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTriggersResponse)
    Q_DISABLE_COPY(GetTriggersResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
