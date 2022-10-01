// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCURRENTMETRICDATAREQUEST_P_H
#define QTAWS_GETCURRENTMETRICDATAREQUEST_P_H

#include "connectrequest_p.h"
#include "getcurrentmetricdatarequest.h"

namespace QtAws {
namespace Connect {

class GetCurrentMetricDataRequest;

class GetCurrentMetricDataRequestPrivate : public ConnectRequestPrivate {

public:
    GetCurrentMetricDataRequestPrivate(const ConnectRequest::Action action,
                                   GetCurrentMetricDataRequest * const q);
    GetCurrentMetricDataRequestPrivate(const GetCurrentMetricDataRequestPrivate &other,
                                   GetCurrentMetricDataRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCurrentMetricDataRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
