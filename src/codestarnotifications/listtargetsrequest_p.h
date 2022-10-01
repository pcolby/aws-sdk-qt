// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTARGETSREQUEST_P_H
#define QTAWS_LISTTARGETSREQUEST_P_H

#include "codestarnotificationsrequest_p.h"
#include "listtargetsrequest.h"

namespace QtAws {
namespace CodestarNotifications {

class ListTargetsRequest;

class ListTargetsRequestPrivate : public CodestarNotificationsRequestPrivate {

public:
    ListTargetsRequestPrivate(const CodestarNotificationsRequest::Action action,
                                   ListTargetsRequest * const q);
    ListTargetsRequestPrivate(const ListTargetsRequestPrivate &other,
                                   ListTargetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTargetsRequest)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif
