// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTWORKFLOWEXECUTIONREQUEST_H
#define QTAWS_STARTWORKFLOWEXECUTIONREQUEST_H

#include "swfrequest.h"

namespace QtAws {
namespace Swf {

class StartWorkflowExecutionRequestPrivate;

class QTAWSSWF_EXPORT StartWorkflowExecutionRequest : public SwfRequest {

public:
    StartWorkflowExecutionRequest(const StartWorkflowExecutionRequest &other);
    StartWorkflowExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartWorkflowExecutionRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
