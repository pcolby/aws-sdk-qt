// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOLUMNSTATISTICSFORPARTITIONRESPONSE_P_H
#define QTAWS_DELETECOLUMNSTATISTICSFORPARTITIONRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class DeleteColumnStatisticsForPartitionResponse;

class DeleteColumnStatisticsForPartitionResponsePrivate : public GlueResponsePrivate {

public:

    explicit DeleteColumnStatisticsForPartitionResponsePrivate(DeleteColumnStatisticsForPartitionResponse * const q);

    void parseDeleteColumnStatisticsForPartitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteColumnStatisticsForPartitionResponse)
    Q_DISABLE_COPY(DeleteColumnStatisticsForPartitionResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
