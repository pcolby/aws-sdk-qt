// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTREMEDIATIONEXECUTIONREQUEST_H
#define QTAWS_STARTREMEDIATIONEXECUTIONREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class StartRemediationExecutionRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT StartRemediationExecutionRequest : public ConfigServiceRequest {

public:
    StartRemediationExecutionRequest(const StartRemediationExecutionRequest &other);
    StartRemediationExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartRemediationExecutionRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
