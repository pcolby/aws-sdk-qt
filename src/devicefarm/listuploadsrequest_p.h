// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUPLOADSREQUEST_P_H
#define QTAWS_LISTUPLOADSREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "listuploadsrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListUploadsRequest;

class ListUploadsRequestPrivate : public DeviceFarmRequestPrivate {

public:
    ListUploadsRequestPrivate(const DeviceFarmRequest::Action action,
                                   ListUploadsRequest * const q);
    ListUploadsRequestPrivate(const ListUploadsRequestPrivate &other,
                                   ListUploadsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListUploadsRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
