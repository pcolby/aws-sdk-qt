// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSYNCEXECUTIONRESPONSE_P_H
#define QTAWS_STARTSYNCEXECUTIONRESPONSE_P_H

#include "sfnresponse_p.h"

namespace QtAws {
namespace Sfn {

class StartSyncExecutionResponse;

class StartSyncExecutionResponsePrivate : public SfnResponsePrivate {

public:

    explicit StartSyncExecutionResponsePrivate(StartSyncExecutionResponse * const q);

    void parseStartSyncExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartSyncExecutionResponse)
    Q_DISABLE_COPY(StartSyncExecutionResponsePrivate)

};

} // namespace Sfn
} // namespace QtAws

#endif
