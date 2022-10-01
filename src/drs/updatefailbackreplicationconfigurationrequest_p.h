// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFAILBACKREPLICATIONCONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATEFAILBACKREPLICATIONCONFIGURATIONREQUEST_P_H

#include "drsrequest_p.h"
#include "updatefailbackreplicationconfigurationrequest.h"

namespace QtAws {
namespace Drs {

class UpdateFailbackReplicationConfigurationRequest;

class UpdateFailbackReplicationConfigurationRequestPrivate : public DrsRequestPrivate {

public:
    UpdateFailbackReplicationConfigurationRequestPrivate(const DrsRequest::Action action,
                                   UpdateFailbackReplicationConfigurationRequest * const q);
    UpdateFailbackReplicationConfigurationRequestPrivate(const UpdateFailbackReplicationConfigurationRequestPrivate &other,
                                   UpdateFailbackReplicationConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFailbackReplicationConfigurationRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
