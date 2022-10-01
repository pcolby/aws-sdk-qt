// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDWORKFLOWSTEPSTATERESPONSE_H
#define QTAWS_SENDWORKFLOWSTEPSTATERESPONSE_H

#include "transferresponse.h"
#include "sendworkflowstepstaterequest.h"

namespace QtAws {
namespace Transfer {

class SendWorkflowStepStateResponsePrivate;

class QTAWSTRANSFER_EXPORT SendWorkflowStepStateResponse : public TransferResponse {
    Q_OBJECT

public:
    SendWorkflowStepStateResponse(const SendWorkflowStepStateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SendWorkflowStepStateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendWorkflowStepStateResponse)
    Q_DISABLE_COPY(SendWorkflowStepStateResponse)

};

} // namespace Transfer
} // namespace QtAws

#endif
