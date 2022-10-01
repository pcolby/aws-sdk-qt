// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHSMCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETEHSMCONFIGURATIONREQUEST_P_H

#include "redshiftrequest_p.h"
#include "deletehsmconfigurationrequest.h"

namespace QtAws {
namespace Redshift {

class DeleteHsmConfigurationRequest;

class DeleteHsmConfigurationRequestPrivate : public RedshiftRequestPrivate {

public:
    DeleteHsmConfigurationRequestPrivate(const RedshiftRequest::Action action,
                                   DeleteHsmConfigurationRequest * const q);
    DeleteHsmConfigurationRequestPrivate(const DeleteHsmConfigurationRequestPrivate &other,
                                   DeleteHsmConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteHsmConfigurationRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
