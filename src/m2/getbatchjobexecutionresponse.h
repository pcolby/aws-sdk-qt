// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBATCHJOBEXECUTIONRESPONSE_H
#define QTAWS_GETBATCHJOBEXECUTIONRESPONSE_H

#include "m2response.h"
#include "getbatchjobexecutionrequest.h"

namespace QtAws {
namespace M2 {

class GetBatchJobExecutionResponsePrivate;

class QTAWSM2_EXPORT GetBatchJobExecutionResponse : public M2Response {
    Q_OBJECT

public:
    GetBatchJobExecutionResponse(const GetBatchJobExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBatchJobExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBatchJobExecutionResponse)
    Q_DISABLE_COPY(GetBatchJobExecutionResponse)

};

} // namespace M2
} // namespace QtAws

#endif
