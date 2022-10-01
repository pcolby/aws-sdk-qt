// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REQUESTCANCELWORKFLOWEXECUTIONREQUEST_H
#define QTAWS_REQUESTCANCELWORKFLOWEXECUTIONREQUEST_H

#include "swfrequest.h"

namespace QtAws {
namespace Swf {

class RequestCancelWorkflowExecutionRequestPrivate;

class QTAWSSWF_EXPORT RequestCancelWorkflowExecutionRequest : public SwfRequest {

public:
    RequestCancelWorkflowExecutionRequest(const RequestCancelWorkflowExecutionRequest &other);
    RequestCancelWorkflowExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RequestCancelWorkflowExecutionRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
