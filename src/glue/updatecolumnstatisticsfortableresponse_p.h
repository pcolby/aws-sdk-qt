// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOLUMNSTATISTICSFORTABLERESPONSE_P_H
#define QTAWS_UPDATECOLUMNSTATISTICSFORTABLERESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class UpdateColumnStatisticsForTableResponse;

class UpdateColumnStatisticsForTableResponsePrivate : public GlueResponsePrivate {

public:

    explicit UpdateColumnStatisticsForTableResponsePrivate(UpdateColumnStatisticsForTableResponse * const q);

    void parseUpdateColumnStatisticsForTableResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateColumnStatisticsForTableResponse)
    Q_DISABLE_COPY(UpdateColumnStatisticsForTableResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
