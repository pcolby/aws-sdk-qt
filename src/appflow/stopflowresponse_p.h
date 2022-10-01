// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPFLOWRESPONSE_P_H
#define QTAWS_STOPFLOWRESPONSE_P_H

#include "appflowresponse_p.h"

namespace QtAws {
namespace Appflow {

class StopFlowResponse;

class StopFlowResponsePrivate : public AppflowResponsePrivate {

public:

    explicit StopFlowResponsePrivate(StopFlowResponse * const q);

    void parseStopFlowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopFlowResponse)
    Q_DISABLE_COPY(StopFlowResponsePrivate)

};

} // namespace Appflow
} // namespace QtAws

#endif
