// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETNAMEDQUERYRESPONSE_P_H
#define QTAWS_BATCHGETNAMEDQUERYRESPONSE_P_H

#include "athenaresponse_p.h"

namespace QtAws {
namespace Athena {

class BatchGetNamedQueryResponse;

class BatchGetNamedQueryResponsePrivate : public AthenaResponsePrivate {

public:

    explicit BatchGetNamedQueryResponsePrivate(BatchGetNamedQueryResponse * const q);

    void parseBatchGetNamedQueryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetNamedQueryResponse)
    Q_DISABLE_COPY(BatchGetNamedQueryResponsePrivate)

};

} // namespace Athena
} // namespace QtAws

#endif
