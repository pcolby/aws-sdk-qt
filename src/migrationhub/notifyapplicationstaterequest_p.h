// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NOTIFYAPPLICATIONSTATEREQUEST_P_H
#define QTAWS_NOTIFYAPPLICATIONSTATEREQUEST_P_H

#include "migrationhubrequest_p.h"
#include "notifyapplicationstaterequest.h"

namespace QtAws {
namespace MigrationHub {

class NotifyApplicationStateRequest;

class NotifyApplicationStateRequestPrivate : public MigrationHubRequestPrivate {

public:
    NotifyApplicationStateRequestPrivate(const MigrationHubRequest::Action action,
                                   NotifyApplicationStateRequest * const q);
    NotifyApplicationStateRequestPrivate(const NotifyApplicationStateRequestPrivate &other,
                                   NotifyApplicationStateRequest * const q);

private:
    Q_DECLARE_PUBLIC(NotifyApplicationStateRequest)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
