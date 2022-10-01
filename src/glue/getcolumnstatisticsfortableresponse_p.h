// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOLUMNSTATISTICSFORTABLERESPONSE_P_H
#define QTAWS_GETCOLUMNSTATISTICSFORTABLERESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetColumnStatisticsForTableResponse;

class GetColumnStatisticsForTableResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetColumnStatisticsForTableResponsePrivate(GetColumnStatisticsForTableResponse * const q);

    void parseGetColumnStatisticsForTableResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetColumnStatisticsForTableResponse)
    Q_DISABLE_COPY(GetColumnStatisticsForTableResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
