// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAUTOMATIONEXECUTIONREQUEST_H
#define QTAWS_GETAUTOMATIONEXECUTIONREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class GetAutomationExecutionRequestPrivate;

class QTAWSSSM_EXPORT GetAutomationExecutionRequest : public SsmRequest {

public:
    GetAutomationExecutionRequest(const GetAutomationExecutionRequest &other);
    GetAutomationExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAutomationExecutionRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
