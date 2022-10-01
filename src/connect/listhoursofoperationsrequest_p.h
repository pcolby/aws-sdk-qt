// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHOURSOFOPERATIONSREQUEST_P_H
#define QTAWS_LISTHOURSOFOPERATIONSREQUEST_P_H

#include "connectrequest_p.h"
#include "listhoursofoperationsrequest.h"

namespace QtAws {
namespace Connect {

class ListHoursOfOperationsRequest;

class ListHoursOfOperationsRequestPrivate : public ConnectRequestPrivate {

public:
    ListHoursOfOperationsRequestPrivate(const ConnectRequest::Action action,
                                   ListHoursOfOperationsRequest * const q);
    ListHoursOfOperationsRequestPrivate(const ListHoursOfOperationsRequestPrivate &other,
                                   ListHoursOfOperationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListHoursOfOperationsRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
