// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETTYPECONFIGURATIONREQUEST_P_H
#define QTAWS_SETTYPECONFIGURATIONREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "settypeconfigurationrequest.h"

namespace QtAws {
namespace CloudFormation {

class SetTypeConfigurationRequest;

class SetTypeConfigurationRequestPrivate : public CloudFormationRequestPrivate {

public:
    SetTypeConfigurationRequestPrivate(const CloudFormationRequest::Action action,
                                   SetTypeConfigurationRequest * const q);
    SetTypeConfigurationRequestPrivate(const SetTypeConfigurationRequestPrivate &other,
                                   SetTypeConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetTypeConfigurationRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
