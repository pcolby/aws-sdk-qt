// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPDATEPARTITIONRESPONSE_P_H
#define QTAWS_BATCHUPDATEPARTITIONRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class BatchUpdatePartitionResponse;

class BatchUpdatePartitionResponsePrivate : public GlueResponsePrivate {

public:

    explicit BatchUpdatePartitionResponsePrivate(BatchUpdatePartitionResponse * const q);

    void parseBatchUpdatePartitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchUpdatePartitionResponse)
    Q_DISABLE_COPY(BatchUpdatePartitionResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
