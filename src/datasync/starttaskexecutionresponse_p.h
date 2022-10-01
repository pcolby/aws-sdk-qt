// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTASKEXECUTIONRESPONSE_P_H
#define QTAWS_STARTTASKEXECUTIONRESPONSE_P_H

#include "datasyncresponse_p.h"

namespace QtAws {
namespace DataSync {

class StartTaskExecutionResponse;

class StartTaskExecutionResponsePrivate : public DataSyncResponsePrivate {

public:

    explicit StartTaskExecutionResponsePrivate(StartTaskExecutionResponse * const q);

    void parseStartTaskExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartTaskExecutionResponse)
    Q_DISABLE_COPY(StartTaskExecutionResponsePrivate)

};

} // namespace DataSync
} // namespace QtAws

#endif
