// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELBATCHJOBEXECUTIONRESPONSE_H
#define QTAWS_CANCELBATCHJOBEXECUTIONRESPONSE_H

#include "m2response.h"
#include "cancelbatchjobexecutionrequest.h"

namespace QtAws {
namespace M2 {

class CancelBatchJobExecutionResponsePrivate;

class QTAWSM2_EXPORT CancelBatchJobExecutionResponse : public M2Response {
    Q_OBJECT

public:
    CancelBatchJobExecutionResponse(const CancelBatchJobExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelBatchJobExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelBatchJobExecutionResponse)
    Q_DISABLE_COPY(CancelBatchJobExecutionResponse)

};

} // namespace M2
} // namespace QtAws

#endif
