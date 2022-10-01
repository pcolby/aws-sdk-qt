// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETIMAGERESPONSE_P_H
#define QTAWS_BATCHGETIMAGERESPONSE_P_H

#include "ecrresponse_p.h"

namespace QtAws {
namespace Ecr {

class BatchGetImageResponse;

class BatchGetImageResponsePrivate : public EcrResponsePrivate {

public:

    explicit BatchGetImageResponsePrivate(BatchGetImageResponse * const q);

    void parseBatchGetImageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetImageResponse)
    Q_DISABLE_COPY(BatchGetImageResponsePrivate)

};

} // namespace Ecr
} // namespace QtAws

#endif
