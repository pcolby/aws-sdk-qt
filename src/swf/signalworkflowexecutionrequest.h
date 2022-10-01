// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SIGNALWORKFLOWEXECUTIONREQUEST_H
#define QTAWS_SIGNALWORKFLOWEXECUTIONREQUEST_H

#include "swfrequest.h"

namespace QtAws {
namespace Swf {

class SignalWorkflowExecutionRequestPrivate;

class QTAWSSWF_EXPORT SignalWorkflowExecutionRequest : public SwfRequest {

public:
    SignalWorkflowExecutionRequest(const SignalWorkflowExecutionRequest &other);
    SignalWorkflowExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SignalWorkflowExecutionRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
