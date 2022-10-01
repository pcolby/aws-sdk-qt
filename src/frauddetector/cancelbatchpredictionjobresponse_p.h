// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELBATCHPREDICTIONJOBRESPONSE_P_H
#define QTAWS_CANCELBATCHPREDICTIONJOBRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class CancelBatchPredictionJobResponse;

class CancelBatchPredictionJobResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit CancelBatchPredictionJobResponsePrivate(CancelBatchPredictionJobResponse * const q);

    void parseCancelBatchPredictionJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelBatchPredictionJobResponse)
    Q_DISABLE_COPY(CancelBatchPredictionJobResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
