// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESECURITYCONFIGURATIONREQUEST_P_H
#define QTAWS_CREATESECURITYCONFIGURATIONREQUEST_P_H

#include "emrrequest_p.h"
#include "createsecurityconfigurationrequest.h"

namespace QtAws {
namespace Emr {

class CreateSecurityConfigurationRequest;

class CreateSecurityConfigurationRequestPrivate : public EmrRequestPrivate {

public:
    CreateSecurityConfigurationRequestPrivate(const EmrRequest::Action action,
                                   CreateSecurityConfigurationRequest * const q);
    CreateSecurityConfigurationRequestPrivate(const CreateSecurityConfigurationRequestPrivate &other,
                                   CreateSecurityConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSecurityConfigurationRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
