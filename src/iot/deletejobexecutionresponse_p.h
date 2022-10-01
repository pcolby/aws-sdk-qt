// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEJOBEXECUTIONRESPONSE_P_H
#define QTAWS_DELETEJOBEXECUTIONRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DeleteJobExecutionResponse;

class DeleteJobExecutionResponsePrivate : public IoTResponsePrivate {

public:

    explicit DeleteJobExecutionResponsePrivate(DeleteJobExecutionResponse * const q);

    void parseDeleteJobExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteJobExecutionResponse)
    Q_DISABLE_COPY(DeleteJobExecutionResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
