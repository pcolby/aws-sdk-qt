// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELTASKEXECUTIONRESPONSE_P_H
#define QTAWS_CANCELTASKEXECUTIONRESPONSE_P_H

#include "datasyncresponse_p.h"

namespace QtAws {
namespace DataSync {

class CancelTaskExecutionResponse;

class CancelTaskExecutionResponsePrivate : public DataSyncResponsePrivate {

public:

    explicit CancelTaskExecutionResponsePrivate(CancelTaskExecutionResponse * const q);

    void parseCancelTaskExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelTaskExecutionResponse)
    Q_DISABLE_COPY(CancelTaskExecutionResponsePrivate)

};

} // namespace DataSync
} // namespace QtAws

#endif
