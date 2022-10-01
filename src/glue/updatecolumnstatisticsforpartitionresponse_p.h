// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOLUMNSTATISTICSFORPARTITIONRESPONSE_P_H
#define QTAWS_UPDATECOLUMNSTATISTICSFORPARTITIONRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class UpdateColumnStatisticsForPartitionResponse;

class UpdateColumnStatisticsForPartitionResponsePrivate : public GlueResponsePrivate {

public:

    explicit UpdateColumnStatisticsForPartitionResponsePrivate(UpdateColumnStatisticsForPartitionResponse * const q);

    void parseUpdateColumnStatisticsForPartitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateColumnStatisticsForPartitionResponse)
    Q_DISABLE_COPY(UpdateColumnStatisticsForPartitionResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
