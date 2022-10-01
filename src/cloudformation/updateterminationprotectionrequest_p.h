// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETERMINATIONPROTECTIONREQUEST_P_H
#define QTAWS_UPDATETERMINATIONPROTECTIONREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "updateterminationprotectionrequest.h"

namespace QtAws {
namespace CloudFormation {

class UpdateTerminationProtectionRequest;

class UpdateTerminationProtectionRequestPrivate : public CloudFormationRequestPrivate {

public:
    UpdateTerminationProtectionRequestPrivate(const CloudFormationRequest::Action action,
                                   UpdateTerminationProtectionRequest * const q);
    UpdateTerminationProtectionRequestPrivate(const UpdateTerminationProtectionRequestPrivate &other,
                                   UpdateTerminationProtectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateTerminationProtectionRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
