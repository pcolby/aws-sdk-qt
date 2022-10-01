// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHCREATEVARIABLERESPONSE_P_H
#define QTAWS_BATCHCREATEVARIABLERESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class BatchCreateVariableResponse;

class BatchCreateVariableResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit BatchCreateVariableResponsePrivate(BatchCreateVariableResponse * const q);

    void parseBatchCreateVariableResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchCreateVariableResponse)
    Q_DISABLE_COPY(BatchCreateVariableResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
