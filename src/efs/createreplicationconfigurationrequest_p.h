// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPLICATIONCONFIGURATIONREQUEST_P_H
#define QTAWS_CREATEREPLICATIONCONFIGURATIONREQUEST_P_H

#include "efsrequest_p.h"
#include "createreplicationconfigurationrequest.h"

namespace QtAws {
namespace Efs {

class CreateReplicationConfigurationRequest;

class CreateReplicationConfigurationRequestPrivate : public EfsRequestPrivate {

public:
    CreateReplicationConfigurationRequestPrivate(const EfsRequest::Action action,
                                   CreateReplicationConfigurationRequest * const q);
    CreateReplicationConfigurationRequestPrivate(const CreateReplicationConfigurationRequestPrivate &other,
                                   CreateReplicationConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateReplicationConfigurationRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
