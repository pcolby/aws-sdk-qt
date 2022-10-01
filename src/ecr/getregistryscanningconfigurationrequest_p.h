// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREGISTRYSCANNINGCONFIGURATIONREQUEST_P_H
#define QTAWS_GETREGISTRYSCANNINGCONFIGURATIONREQUEST_P_H

#include "ecrrequest_p.h"
#include "getregistryscanningconfigurationrequest.h"

namespace QtAws {
namespace Ecr {

class GetRegistryScanningConfigurationRequest;

class GetRegistryScanningConfigurationRequestPrivate : public EcrRequestPrivate {

public:
    GetRegistryScanningConfigurationRequestPrivate(const EcrRequest::Action action,
                                   GetRegistryScanningConfigurationRequest * const q);
    GetRegistryScanningConfigurationRequestPrivate(const GetRegistryScanningConfigurationRequestPrivate &other,
                                   GetRegistryScanningConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRegistryScanningConfigurationRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
