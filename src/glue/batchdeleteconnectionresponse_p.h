// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETECONNECTIONRESPONSE_P_H
#define QTAWS_BATCHDELETECONNECTIONRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class BatchDeleteConnectionResponse;

class BatchDeleteConnectionResponsePrivate : public GlueResponsePrivate {

public:

    explicit BatchDeleteConnectionResponsePrivate(BatchDeleteConnectionResponse * const q);

    void parseBatchDeleteConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchDeleteConnectionResponse)
    Q_DISABLE_COPY(BatchDeleteConnectionResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
