// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBATCHIMPORTJOBRESPONSE_P_H
#define QTAWS_CREATEBATCHIMPORTJOBRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class CreateBatchImportJobResponse;

class CreateBatchImportJobResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit CreateBatchImportJobResponsePrivate(CreateBatchImportJobResponse * const q);

    void parseCreateBatchImportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateBatchImportJobResponse)
    Q_DISABLE_COPY(CreateBatchImportJobResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
