// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETTRIGGERSRESPONSE_P_H
#define QTAWS_BATCHGETTRIGGERSRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class BatchGetTriggersResponse;

class BatchGetTriggersResponsePrivate : public GlueResponsePrivate {

public:

    explicit BatchGetTriggersResponsePrivate(BatchGetTriggersResponse * const q);

    void parseBatchGetTriggersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetTriggersResponse)
    Q_DISABLE_COPY(BatchGetTriggersResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
