// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMETRICDATAREQUEST_P_H
#define QTAWS_GETMETRICDATAREQUEST_P_H

#include "connectrequest_p.h"
#include "getmetricdatarequest.h"

namespace QtAws {
namespace Connect {

class GetMetricDataRequest;

class GetMetricDataRequestPrivate : public ConnectRequestPrivate {

public:
    GetMetricDataRequestPrivate(const ConnectRequest::Action action,
                                   GetMetricDataRequest * const q);
    GetMetricDataRequestPrivate(const GetMetricDataRequestPrivate &other,
                                   GetMetricDataRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMetricDataRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
