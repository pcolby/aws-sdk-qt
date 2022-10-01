// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBATCHIMPORTJOBRESPONSE_H
#define QTAWS_DELETEBATCHIMPORTJOBRESPONSE_H

#include "frauddetectorresponse.h"
#include "deletebatchimportjobrequest.h"

namespace QtAws {
namespace FraudDetector {

class DeleteBatchImportJobResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT DeleteBatchImportJobResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    DeleteBatchImportJobResponse(const DeleteBatchImportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBatchImportJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBatchImportJobResponse)
    Q_DISABLE_COPY(DeleteBatchImportJobResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
