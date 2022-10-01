// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHCREATEPARTITIONRESPONSE_P_H
#define QTAWS_BATCHCREATEPARTITIONRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class BatchCreatePartitionResponse;

class BatchCreatePartitionResponsePrivate : public GlueResponsePrivate {

public:

    explicit BatchCreatePartitionResponsePrivate(BatchCreatePartitionResponse * const q);

    void parseBatchCreatePartitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchCreatePartitionResponse)
    Q_DISABLE_COPY(BatchCreatePartitionResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
