// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPLICATIONCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETEREPLICATIONCONFIGURATIONREQUEST_P_H

#include "efsrequest_p.h"
#include "deletereplicationconfigurationrequest.h"

namespace QtAws {
namespace Efs {

class DeleteReplicationConfigurationRequest;

class DeleteReplicationConfigurationRequestPrivate : public EfsRequestPrivate {

public:
    DeleteReplicationConfigurationRequestPrivate(const EfsRequest::Action action,
                                   DeleteReplicationConfigurationRequest * const q);
    DeleteReplicationConfigurationRequestPrivate(const DeleteReplicationConfigurationRequestPrivate &other,
                                   DeleteReplicationConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteReplicationConfigurationRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
