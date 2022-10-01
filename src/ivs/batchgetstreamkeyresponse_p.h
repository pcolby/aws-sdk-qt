// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETSTREAMKEYRESPONSE_P_H
#define QTAWS_BATCHGETSTREAMKEYRESPONSE_P_H

#include "ivsresponse_p.h"

namespace QtAws {
namespace Ivs {

class BatchGetStreamKeyResponse;

class BatchGetStreamKeyResponsePrivate : public IvsResponsePrivate {

public:

    explicit BatchGetStreamKeyResponsePrivate(BatchGetStreamKeyResponse * const q);

    void parseBatchGetStreamKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetStreamKeyResponse)
    Q_DISABLE_COPY(BatchGetStreamKeyResponsePrivate)

};

} // namespace Ivs
} // namespace QtAws

#endif
