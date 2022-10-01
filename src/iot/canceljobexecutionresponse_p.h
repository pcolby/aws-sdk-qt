// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELJOBEXECUTIONRESPONSE_P_H
#define QTAWS_CANCELJOBEXECUTIONRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class CancelJobExecutionResponse;

class CancelJobExecutionResponsePrivate : public IoTResponsePrivate {

public:

    explicit CancelJobExecutionResponsePrivate(CancelJobExecutionResponse * const q);

    void parseCancelJobExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelJobExecutionResponse)
    Q_DISABLE_COPY(CancelJobExecutionResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
