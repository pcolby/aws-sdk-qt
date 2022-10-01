// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHSMCONFIGURATIONREQUEST_P_H
#define QTAWS_CREATEHSMCONFIGURATIONREQUEST_P_H

#include "redshiftrequest_p.h"
#include "createhsmconfigurationrequest.h"

namespace QtAws {
namespace Redshift {

class CreateHsmConfigurationRequest;

class CreateHsmConfigurationRequestPrivate : public RedshiftRequestPrivate {

public:
    CreateHsmConfigurationRequestPrivate(const RedshiftRequest::Action action,
                                   CreateHsmConfigurationRequest * const q);
    CreateHsmConfigurationRequestPrivate(const CreateHsmConfigurationRequestPrivate &other,
                                   CreateHsmConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateHsmConfigurationRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
