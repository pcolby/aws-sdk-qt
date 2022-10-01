// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATEJOBFLOWSRESPONSE_P_H
#define QTAWS_TERMINATEJOBFLOWSRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class TerminateJobFlowsResponse;

class TerminateJobFlowsResponsePrivate : public EmrResponsePrivate {

public:

    explicit TerminateJobFlowsResponsePrivate(TerminateJobFlowsResponse * const q);

    void parseTerminateJobFlowsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TerminateJobFlowsResponse)
    Q_DISABLE_COPY(TerminateJobFlowsResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif
