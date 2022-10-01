// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYAQUACONFIGURATIONREQUEST_P_H
#define QTAWS_MODIFYAQUACONFIGURATIONREQUEST_P_H

#include "redshiftrequest_p.h"
#include "modifyaquaconfigurationrequest.h"

namespace QtAws {
namespace Redshift {

class ModifyAquaConfigurationRequest;

class ModifyAquaConfigurationRequestPrivate : public RedshiftRequestPrivate {

public:
    ModifyAquaConfigurationRequestPrivate(const RedshiftRequest::Action action,
                                   ModifyAquaConfigurationRequest * const q);
    ModifyAquaConfigurationRequestPrivate(const ModifyAquaConfigurationRequestPrivate &other,
                                   ModifyAquaConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyAquaConfigurationRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
