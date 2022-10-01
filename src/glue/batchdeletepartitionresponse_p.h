// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEPARTITIONRESPONSE_P_H
#define QTAWS_BATCHDELETEPARTITIONRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class BatchDeletePartitionResponse;

class BatchDeletePartitionResponsePrivate : public GlueResponsePrivate {

public:

    explicit BatchDeletePartitionResponsePrivate(BatchDeletePartitionResponse * const q);

    void parseBatchDeletePartitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchDeletePartitionResponse)
    Q_DISABLE_COPY(BatchDeletePartitionResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
