// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHCREATETABLEROWSRESPONSE_P_H
#define QTAWS_BATCHCREATETABLEROWSRESPONSE_P_H

#include "honeycoderesponse_p.h"

namespace QtAws {
namespace Honeycode {

class BatchCreateTableRowsResponse;

class BatchCreateTableRowsResponsePrivate : public HoneycodeResponsePrivate {

public:

    explicit BatchCreateTableRowsResponsePrivate(BatchCreateTableRowsResponse * const q);

    void parseBatchCreateTableRowsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchCreateTableRowsResponse)
    Q_DISABLE_COPY(BatchCreateTableRowsResponsePrivate)

};

} // namespace Honeycode
} // namespace QtAws

#endif
