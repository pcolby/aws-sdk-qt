// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBATCHJOBEXECUTIONRESPONSE_P_H
#define QTAWS_GETBATCHJOBEXECUTIONRESPONSE_P_H

#include "m2response_p.h"

namespace QtAws {
namespace M2 {

class GetBatchJobExecutionResponse;

class GetBatchJobExecutionResponsePrivate : public M2ResponsePrivate {

public:

    explicit GetBatchJobExecutionResponsePrivate(GetBatchJobExecutionResponse * const q);

    void parseGetBatchJobExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBatchJobExecutionResponse)
    Q_DISABLE_COPY(GetBatchJobExecutionResponsePrivate)

};

} // namespace M2
} // namespace QtAws

#endif
