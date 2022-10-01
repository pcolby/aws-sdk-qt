// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDJOBFLOWSTEPSRESPONSE_P_H
#define QTAWS_ADDJOBFLOWSTEPSRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class AddJobFlowStepsResponse;

class AddJobFlowStepsResponsePrivate : public EmrResponsePrivate {

public:

    explicit AddJobFlowStepsResponsePrivate(AddJobFlowStepsResponse * const q);

    void parseAddJobFlowStepsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddJobFlowStepsResponse)
    Q_DISABLE_COPY(AddJobFlowStepsResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif
