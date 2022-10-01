// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETACCOUNTSTATUSRESPONSE_P_H
#define QTAWS_BATCHGETACCOUNTSTATUSRESPONSE_P_H

#include "inspector2response_p.h"

namespace QtAws {
namespace Inspector2 {

class BatchGetAccountStatusResponse;

class BatchGetAccountStatusResponsePrivate : public Inspector2ResponsePrivate {

public:

    explicit BatchGetAccountStatusResponsePrivate(BatchGetAccountStatusResponse * const q);

    void parseBatchGetAccountStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetAccountStatusResponse)
    Q_DISABLE_COPY(BatchGetAccountStatusResponsePrivate)

};

} // namespace Inspector2
} // namespace QtAws

#endif
