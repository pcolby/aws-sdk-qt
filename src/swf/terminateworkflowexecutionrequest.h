// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATEWORKFLOWEXECUTIONREQUEST_H
#define QTAWS_TERMINATEWORKFLOWEXECUTIONREQUEST_H

#include "swfrequest.h"

namespace QtAws {
namespace Swf {

class TerminateWorkflowExecutionRequestPrivate;

class QTAWSSWF_EXPORT TerminateWorkflowExecutionRequest : public SwfRequest {

public:
    TerminateWorkflowExecutionRequest(const TerminateWorkflowExecutionRequest &other);
    TerminateWorkflowExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TerminateWorkflowExecutionRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
