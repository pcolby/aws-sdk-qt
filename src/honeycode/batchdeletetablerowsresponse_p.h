// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETETABLEROWSRESPONSE_P_H
#define QTAWS_BATCHDELETETABLEROWSRESPONSE_P_H

#include "honeycoderesponse_p.h"

namespace QtAws {
namespace Honeycode {

class BatchDeleteTableRowsResponse;

class BatchDeleteTableRowsResponsePrivate : public HoneycodeResponsePrivate {

public:

    explicit BatchDeleteTableRowsResponsePrivate(BatchDeleteTableRowsResponse * const q);

    void parseBatchDeleteTableRowsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchDeleteTableRowsResponse)
    Q_DISABLE_COPY(BatchDeleteTableRowsResponsePrivate)

};

} // namespace Honeycode
} // namespace QtAws

#endif
