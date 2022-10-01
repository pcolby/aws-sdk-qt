// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTATISTICSREQUEST_P_H
#define QTAWS_GETSTATISTICSREQUEST_P_H

#include "iotrequest_p.h"
#include "getstatisticsrequest.h"

namespace QtAws {
namespace IoT {

class GetStatisticsRequest;

class GetStatisticsRequestPrivate : public IoTRequestPrivate {

public:
    GetStatisticsRequestPrivate(const IoTRequest::Action action,
                                   GetStatisticsRequest * const q);
    GetStatisticsRequestPrivate(const GetStatisticsRequestPrivate &other,
                                   GetStatisticsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetStatisticsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
