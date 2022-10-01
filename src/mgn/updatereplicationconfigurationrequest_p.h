// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPLICATIONCONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATEREPLICATIONCONFIGURATIONREQUEST_P_H

#include "mgnrequest_p.h"
#include "updatereplicationconfigurationrequest.h"

namespace QtAws {
namespace Mgn {

class UpdateReplicationConfigurationRequest;

class UpdateReplicationConfigurationRequestPrivate : public MgnRequestPrivate {

public:
    UpdateReplicationConfigurationRequestPrivate(const MgnRequest::Action action,
                                   UpdateReplicationConfigurationRequest * const q);
    UpdateReplicationConfigurationRequestPrivate(const UpdateReplicationConfigurationRequestPrivate &other,
                                   UpdateReplicationConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateReplicationConfigurationRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
