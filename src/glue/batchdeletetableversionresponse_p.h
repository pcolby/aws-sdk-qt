// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETETABLEVERSIONRESPONSE_P_H
#define QTAWS_BATCHDELETETABLEVERSIONRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class BatchDeleteTableVersionResponse;

class BatchDeleteTableVersionResponsePrivate : public GlueResponsePrivate {

public:

    explicit BatchDeleteTableVersionResponsePrivate(BatchDeleteTableVersionResponse * const q);

    void parseBatchDeleteTableVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchDeleteTableVersionResponse)
    Q_DISABLE_COPY(BatchDeleteTableVersionResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
