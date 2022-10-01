// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREGISTRYSCANNINGCONFIGURATIONREQUEST_P_H
#define QTAWS_PUTREGISTRYSCANNINGCONFIGURATIONREQUEST_P_H

#include "ecrrequest_p.h"
#include "putregistryscanningconfigurationrequest.h"

namespace QtAws {
namespace Ecr {

class PutRegistryScanningConfigurationRequest;

class PutRegistryScanningConfigurationRequestPrivate : public EcrRequestPrivate {

public:
    PutRegistryScanningConfigurationRequestPrivate(const EcrRequest::Action action,
                                   PutRegistryScanningConfigurationRequest * const q);
    PutRegistryScanningConfigurationRequestPrivate(const PutRegistryScanningConfigurationRequestPrivate &other,
                                   PutRegistryScanningConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutRegistryScanningConfigurationRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
