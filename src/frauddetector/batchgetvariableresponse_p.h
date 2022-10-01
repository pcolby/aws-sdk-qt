// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETVARIABLERESPONSE_P_H
#define QTAWS_BATCHGETVARIABLERESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class BatchGetVariableResponse;

class BatchGetVariableResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit BatchGetVariableResponsePrivate(BatchGetVariableResponse * const q);

    void parseBatchGetVariableResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetVariableResponse)
    Q_DISABLE_COPY(BatchGetVariableResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
