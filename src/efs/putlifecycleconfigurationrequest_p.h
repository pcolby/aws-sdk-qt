// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLIFECYCLECONFIGURATIONREQUEST_P_H
#define QTAWS_PUTLIFECYCLECONFIGURATIONREQUEST_P_H

#include "efsrequest_p.h"
#include "putlifecycleconfigurationrequest.h"

namespace QtAws {
namespace Efs {

class PutLifecycleConfigurationRequest;

class PutLifecycleConfigurationRequestPrivate : public EfsRequestPrivate {

public:
    PutLifecycleConfigurationRequestPrivate(const EfsRequest::Action action,
                                   PutLifecycleConfigurationRequest * const q);
    PutLifecycleConfigurationRequestPrivate(const PutLifecycleConfigurationRequestPrivate &other,
                                   PutLifecycleConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutLifecycleConfigurationRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
