// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELBATCHJOBEXECUTIONRESPONSE_P_H
#define QTAWS_CANCELBATCHJOBEXECUTIONRESPONSE_P_H

#include "m2response_p.h"

namespace QtAws {
namespace M2 {

class CancelBatchJobExecutionResponse;

class CancelBatchJobExecutionResponsePrivate : public M2ResponsePrivate {

public:

    explicit CancelBatchJobExecutionResponsePrivate(CancelBatchJobExecutionResponse * const q);

    void parseCancelBatchJobExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelBatchJobExecutionResponse)
    Q_DISABLE_COPY(CancelBatchJobExecutionResponsePrivate)

};

} // namespace M2
} // namespace QtAws

#endif
