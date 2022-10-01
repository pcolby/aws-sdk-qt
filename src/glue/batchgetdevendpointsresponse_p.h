// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETDEVENDPOINTSRESPONSE_P_H
#define QTAWS_BATCHGETDEVENDPOINTSRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class BatchGetDevEndpointsResponse;

class BatchGetDevEndpointsResponsePrivate : public GlueResponsePrivate {

public:

    explicit BatchGetDevEndpointsResponsePrivate(BatchGetDevEndpointsResponse * const q);

    void parseBatchGetDevEndpointsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetDevEndpointsResponse)
    Q_DISABLE_COPY(BatchGetDevEndpointsResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
