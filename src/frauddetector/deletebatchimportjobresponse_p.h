// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBATCHIMPORTJOBRESPONSE_P_H
#define QTAWS_DELETEBATCHIMPORTJOBRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class DeleteBatchImportJobResponse;

class DeleteBatchImportJobResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit DeleteBatchImportJobResponsePrivate(DeleteBatchImportJobResponse * const q);

    void parseDeleteBatchImportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBatchImportJobResponse)
    Q_DISABLE_COPY(DeleteBatchImportJobResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
