// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPSERTTABLEROWSRESPONSE_P_H
#define QTAWS_BATCHUPSERTTABLEROWSRESPONSE_P_H

#include "honeycoderesponse_p.h"

namespace QtAws {
namespace Honeycode {

class BatchUpsertTableRowsResponse;

class BatchUpsertTableRowsResponsePrivate : public HoneycodeResponsePrivate {

public:

    explicit BatchUpsertTableRowsResponsePrivate(BatchUpsertTableRowsResponse * const q);

    void parseBatchUpsertTableRowsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchUpsertTableRowsResponse)
    Q_DISABLE_COPY(BatchUpsertTableRowsResponsePrivate)

};

} // namespace Honeycode
} // namespace QtAws

#endif
