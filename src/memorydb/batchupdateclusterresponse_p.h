// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPDATECLUSTERRESPONSE_P_H
#define QTAWS_BATCHUPDATECLUSTERRESPONSE_P_H

#include "memorydbresponse_p.h"

namespace QtAws {
namespace MemoryDb {

class BatchUpdateClusterResponse;

class BatchUpdateClusterResponsePrivate : public MemoryDbResponsePrivate {

public:

    explicit BatchUpdateClusterResponsePrivate(BatchUpdateClusterResponse * const q);

    void parseBatchUpdateClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchUpdateClusterResponse)
    Q_DISABLE_COPY(BatchUpdateClusterResponsePrivate)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
