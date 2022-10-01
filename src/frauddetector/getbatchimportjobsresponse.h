// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBATCHIMPORTJOBSRESPONSE_H
#define QTAWS_GETBATCHIMPORTJOBSRESPONSE_H

#include "frauddetectorresponse.h"
#include "getbatchimportjobsrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetBatchImportJobsResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT GetBatchImportJobsResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    GetBatchImportJobsResponse(const GetBatchImportJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBatchImportJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBatchImportJobsResponse)
    Q_DISABLE_COPY(GetBatchImportJobsResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
