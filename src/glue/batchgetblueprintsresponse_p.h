// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETBLUEPRINTSRESPONSE_P_H
#define QTAWS_BATCHGETBLUEPRINTSRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class BatchGetBlueprintsResponse;

class BatchGetBlueprintsResponsePrivate : public GlueResponsePrivate {

public:

    explicit BatchGetBlueprintsResponsePrivate(BatchGetBlueprintsResponse * const q);

    void parseBatchGetBlueprintsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetBlueprintsResponse)
    Q_DISABLE_COPY(BatchGetBlueprintsResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
