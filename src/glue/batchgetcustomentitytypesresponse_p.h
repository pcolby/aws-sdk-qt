// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETCUSTOMENTITYTYPESRESPONSE_P_H
#define QTAWS_BATCHGETCUSTOMENTITYTYPESRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class BatchGetCustomEntityTypesResponse;

class BatchGetCustomEntityTypesResponsePrivate : public GlueResponsePrivate {

public:

    explicit BatchGetCustomEntityTypesResponsePrivate(BatchGetCustomEntityTypesResponse * const q);

    void parseBatchGetCustomEntityTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetCustomEntityTypesResponse)
    Q_DISABLE_COPY(BatchGetCustomEntityTypesResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
