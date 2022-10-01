// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPSREQUEST_P_H
#define QTAWS_LISTAPPSREQUEST_P_H

#include "smsrequest_p.h"
#include "listappsrequest.h"

namespace QtAws {
namespace Sms {

class ListAppsRequest;

class ListAppsRequestPrivate : public SmsRequestPrivate {

public:
    ListAppsRequestPrivate(const SmsRequest::Action action,
                                   ListAppsRequest * const q);
    ListAppsRequestPrivate(const ListAppsRequestPrivate &other,
                                   ListAppsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAppsRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
