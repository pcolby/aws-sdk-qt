// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPLICATIONCONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATEREPLICATIONCONFIGURATIONREQUEST_P_H

#include "drsrequest_p.h"
#include "updatereplicationconfigurationrequest.h"

namespace QtAws {
namespace Drs {

class UpdateReplicationConfigurationRequest;

class UpdateReplicationConfigurationRequestPrivate : public DrsRequestPrivate {

public:
    UpdateReplicationConfigurationRequestPrivate(const DrsRequest::Action action,
                                   UpdateReplicationConfigurationRequest * const q);
    UpdateReplicationConfigurationRequestPrivate(const UpdateReplicationConfigurationRequestPrivate &other,
                                   UpdateReplicationConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateReplicationConfigurationRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
