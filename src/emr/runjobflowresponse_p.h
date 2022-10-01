// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RUNJOBFLOWRESPONSE_P_H
#define QTAWS_RUNJOBFLOWRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class RunJobFlowResponse;

class RunJobFlowResponsePrivate : public EmrResponsePrivate {

public:

    explicit RunJobFlowResponsePrivate(RunJobFlowResponse * const q);

    void parseRunJobFlowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RunJobFlowResponse)
    Q_DISABLE_COPY(RunJobFlowResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif
