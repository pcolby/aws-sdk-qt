// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELBATCHIMPORTJOBRESPONSE_P_H
#define QTAWS_CANCELBATCHIMPORTJOBRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class CancelBatchImportJobResponse;

class CancelBatchImportJobResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit CancelBatchImportJobResponsePrivate(CancelBatchImportJobResponse * const q);

    void parseCancelBatchImportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelBatchImportJobResponse)
    Q_DISABLE_COPY(CancelBatchImportJobResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
