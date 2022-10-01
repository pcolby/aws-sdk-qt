// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETARGETREQUEST_P_H
#define QTAWS_DELETETARGETREQUEST_P_H

#include "codestarnotificationsrequest_p.h"
#include "deletetargetrequest.h"

namespace QtAws {
namespace CodestarNotifications {

class DeleteTargetRequest;

class DeleteTargetRequestPrivate : public CodestarNotificationsRequestPrivate {

public:
    DeleteTargetRequestPrivate(const CodestarNotificationsRequest::Action action,
                                   DeleteTargetRequest * const q);
    DeleteTargetRequestPrivate(const DeleteTargetRequestPrivate &other,
                                   DeleteTargetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTargetRequest)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif
