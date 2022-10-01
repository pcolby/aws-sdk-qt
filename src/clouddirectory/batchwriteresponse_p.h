// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHWRITERESPONSE_P_H
#define QTAWS_BATCHWRITERESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class BatchWriteResponse;

class BatchWriteResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit BatchWriteResponsePrivate(BatchWriteResponse * const q);

    void parseBatchWriteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchWriteResponse)
    Q_DISABLE_COPY(BatchWriteResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
