// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETGRAPHMEMBERDATASOURCESRESPONSE_P_H
#define QTAWS_BATCHGETGRAPHMEMBERDATASOURCESRESPONSE_P_H

#include "detectiveresponse_p.h"

namespace QtAws {
namespace Detective {

class BatchGetGraphMemberDatasourcesResponse;

class BatchGetGraphMemberDatasourcesResponsePrivate : public DetectiveResponsePrivate {

public:

    explicit BatchGetGraphMemberDatasourcesResponsePrivate(BatchGetGraphMemberDatasourcesResponse * const q);

    void parseBatchGetGraphMemberDatasourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetGraphMemberDatasourcesResponse)
    Q_DISABLE_COPY(BatchGetGraphMemberDatasourcesResponsePrivate)

};

} // namespace Detective
} // namespace QtAws

#endif
