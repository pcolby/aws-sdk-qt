// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSESSIONRESPONSE_P_H
#define QTAWS_STOPSESSIONRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class StopSessionResponse;

class StopSessionResponsePrivate : public GlueResponsePrivate {

public:

    explicit StopSessionResponsePrivate(StopSessionResponse * const q);

    void parseStopSessionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopSessionResponse)
    Q_DISABLE_COPY(StopSessionResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
