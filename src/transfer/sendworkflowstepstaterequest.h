// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDWORKFLOWSTEPSTATEREQUEST_H
#define QTAWS_SENDWORKFLOWSTEPSTATEREQUEST_H

#include "transferrequest.h"

namespace QtAws {
namespace Transfer {

class SendWorkflowStepStateRequestPrivate;

class QTAWSTRANSFER_EXPORT SendWorkflowStepStateRequest : public TransferRequest {

public:
    SendWorkflowStepStateRequest(const SendWorkflowStepStateRequest &other);
    SendWorkflowStepStateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendWorkflowStepStateRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
