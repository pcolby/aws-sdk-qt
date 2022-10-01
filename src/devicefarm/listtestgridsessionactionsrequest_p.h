// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTESTGRIDSESSIONACTIONSREQUEST_P_H
#define QTAWS_LISTTESTGRIDSESSIONACTIONSREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "listtestgridsessionactionsrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListTestGridSessionActionsRequest;

class ListTestGridSessionActionsRequestPrivate : public DeviceFarmRequestPrivate {

public:
    ListTestGridSessionActionsRequestPrivate(const DeviceFarmRequest::Action action,
                                   ListTestGridSessionActionsRequest * const q);
    ListTestGridSessionActionsRequestPrivate(const ListTestGridSessionActionsRequestPrivate &other,
                                   ListTestGridSessionActionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTestGridSessionActionsRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
