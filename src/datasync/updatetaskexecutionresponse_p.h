// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETASKEXECUTIONRESPONSE_P_H
#define QTAWS_UPDATETASKEXECUTIONRESPONSE_P_H

#include "datasyncresponse_p.h"

namespace QtAws {
namespace DataSync {

class UpdateTaskExecutionResponse;

class UpdateTaskExecutionResponsePrivate : public DataSyncResponsePrivate {

public:

    explicit UpdateTaskExecutionResponsePrivate(UpdateTaskExecutionResponse * const q);

    void parseUpdateTaskExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateTaskExecutionResponse)
    Q_DISABLE_COPY(UpdateTaskExecutionResponsePrivate)

};

} // namespace DataSync
} // namespace QtAws

#endif
