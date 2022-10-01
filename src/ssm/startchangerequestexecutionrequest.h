// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCHANGEREQUESTEXECUTIONREQUEST_H
#define QTAWS_STARTCHANGEREQUESTEXECUTIONREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class StartChangeRequestExecutionRequestPrivate;

class QTAWSSSM_EXPORT StartChangeRequestExecutionRequest : public SsmRequest {

public:
    StartChangeRequestExecutionRequest(const StartChangeRequestExecutionRequest &other);
    StartChangeRequestExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartChangeRequestExecutionRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
