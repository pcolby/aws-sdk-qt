// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELBATCHIMPORTJOBRESPONSE_H
#define QTAWS_CANCELBATCHIMPORTJOBRESPONSE_H

#include "frauddetectorresponse.h"
#include "cancelbatchimportjobrequest.h"

namespace QtAws {
namespace FraudDetector {

class CancelBatchImportJobResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT CancelBatchImportJobResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    CancelBatchImportJobResponse(const CancelBatchImportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelBatchImportJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelBatchImportJobResponse)
    Q_DISABLE_COPY(CancelBatchImportJobResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
