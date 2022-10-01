// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBATCHIMPORTJOBSRESPONSE_P_H
#define QTAWS_GETBATCHIMPORTJOBSRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class GetBatchImportJobsResponse;

class GetBatchImportJobsResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit GetBatchImportJobsResponsePrivate(GetBatchImportJobsResponse * const q);

    void parseGetBatchImportJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBatchImportJobsResponse)
    Q_DISABLE_COPY(GetBatchImportJobsResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
