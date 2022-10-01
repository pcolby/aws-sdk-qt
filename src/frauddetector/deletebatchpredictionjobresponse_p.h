// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBATCHPREDICTIONJOBRESPONSE_P_H
#define QTAWS_DELETEBATCHPREDICTIONJOBRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class DeleteBatchPredictionJobResponse;

class DeleteBatchPredictionJobResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit DeleteBatchPredictionJobResponsePrivate(DeleteBatchPredictionJobResponse * const q);

    void parseDeleteBatchPredictionJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBatchPredictionJobResponse)
    Q_DISABLE_COPY(DeleteBatchPredictionJobResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
