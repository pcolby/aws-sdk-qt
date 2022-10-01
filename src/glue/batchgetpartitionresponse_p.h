// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETPARTITIONRESPONSE_P_H
#define QTAWS_BATCHGETPARTITIONRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class BatchGetPartitionResponse;

class BatchGetPartitionResponsePrivate : public GlueResponsePrivate {

public:

    explicit BatchGetPartitionResponsePrivate(BatchGetPartitionResponse * const q);

    void parseBatchGetPartitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetPartitionResponse)
    Q_DISABLE_COPY(BatchGetPartitionResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
