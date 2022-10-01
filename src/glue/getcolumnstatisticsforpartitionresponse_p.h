// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOLUMNSTATISTICSFORPARTITIONRESPONSE_P_H
#define QTAWS_GETCOLUMNSTATISTICSFORPARTITIONRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetColumnStatisticsForPartitionResponse;

class GetColumnStatisticsForPartitionResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetColumnStatisticsForPartitionResponsePrivate(GetColumnStatisticsForPartitionResponse * const q);

    void parseGetColumnStatisticsForPartitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetColumnStatisticsForPartitionResponse)
    Q_DISABLE_COPY(GetColumnStatisticsForPartitionResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
