// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBATCHIMPORTJOBRESPONSE_H
#define QTAWS_CREATEBATCHIMPORTJOBRESPONSE_H

#include "frauddetectorresponse.h"
#include "createbatchimportjobrequest.h"

namespace QtAws {
namespace FraudDetector {

class CreateBatchImportJobResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT CreateBatchImportJobResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    CreateBatchImportJobResponse(const CreateBatchImportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateBatchImportJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBatchImportJobResponse)
    Q_DISABLE_COPY(CreateBatchImportJobResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
