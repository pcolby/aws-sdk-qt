// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPAUTOMATIONEXECUTIONREQUEST_H
#define QTAWS_STOPAUTOMATIONEXECUTIONREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class StopAutomationExecutionRequestPrivate;

class QTAWSSSM_EXPORT StopAutomationExecutionRequest : public SsmRequest {

public:
    StopAutomationExecutionRequest(const StopAutomationExecutionRequest &other);
    StopAutomationExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopAutomationExecutionRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
