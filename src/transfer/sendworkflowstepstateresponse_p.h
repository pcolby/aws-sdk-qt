// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDWORKFLOWSTEPSTATERESPONSE_P_H
#define QTAWS_SENDWORKFLOWSTEPSTATERESPONSE_P_H

#include "transferresponse_p.h"

namespace QtAws {
namespace Transfer {

class SendWorkflowStepStateResponse;

class SendWorkflowStepStateResponsePrivate : public TransferResponsePrivate {

public:

    explicit SendWorkflowStepStateResponsePrivate(SendWorkflowStepStateResponse * const q);

    void parseSendWorkflowStepStateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendWorkflowStepStateResponse)
    Q_DISABLE_COPY(SendWorkflowStepStateResponsePrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif
