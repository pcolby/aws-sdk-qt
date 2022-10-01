// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPDATETABLEROWSRESPONSE_P_H
#define QTAWS_BATCHUPDATETABLEROWSRESPONSE_P_H

#include "honeycoderesponse_p.h"

namespace QtAws {
namespace Honeycode {

class BatchUpdateTableRowsResponse;

class BatchUpdateTableRowsResponsePrivate : public HoneycodeResponsePrivate {

public:

    explicit BatchUpdateTableRowsResponsePrivate(BatchUpdateTableRowsResponse * const q);

    void parseBatchUpdateTableRowsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchUpdateTableRowsResponse)
    Q_DISABLE_COPY(BatchUpdateTableRowsResponsePrivate)

};

} // namespace Honeycode
} // namespace QtAws

#endif
