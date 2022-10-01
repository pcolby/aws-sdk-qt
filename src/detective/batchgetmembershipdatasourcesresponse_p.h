// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETMEMBERSHIPDATASOURCESRESPONSE_P_H
#define QTAWS_BATCHGETMEMBERSHIPDATASOURCESRESPONSE_P_H

#include "detectiveresponse_p.h"

namespace QtAws {
namespace Detective {

class BatchGetMembershipDatasourcesResponse;

class BatchGetMembershipDatasourcesResponsePrivate : public DetectiveResponsePrivate {

public:

    explicit BatchGetMembershipDatasourcesResponsePrivate(BatchGetMembershipDatasourcesResponse * const q);

    void parseBatchGetMembershipDatasourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetMembershipDatasourcesResponse)
    Q_DISABLE_COPY(BatchGetMembershipDatasourcesResponsePrivate)

};

} // namespace Detective
} // namespace QtAws

#endif
