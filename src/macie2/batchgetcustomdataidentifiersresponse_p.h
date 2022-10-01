// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETCUSTOMDATAIDENTIFIERSRESPONSE_P_H
#define QTAWS_BATCHGETCUSTOMDATAIDENTIFIERSRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class BatchGetCustomDataIdentifiersResponse;

class BatchGetCustomDataIdentifiersResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit BatchGetCustomDataIdentifiersResponsePrivate(BatchGetCustomDataIdentifiersResponse * const q);

    void parseBatchGetCustomDataIdentifiersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetCustomDataIdentifiersResponse)
    Q_DISABLE_COPY(BatchGetCustomDataIdentifiersResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
