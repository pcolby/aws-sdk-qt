// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTAUTOMATIONEXECUTIONREQUEST_H
#define QTAWS_STARTAUTOMATIONEXECUTIONREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class StartAutomationExecutionRequestPrivate;

class QTAWSSSM_EXPORT StartAutomationExecutionRequest : public SsmRequest {

public:
    StartAutomationExecutionRequest(const StartAutomationExecutionRequest &other);
    StartAutomationExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartAutomationExecutionRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
