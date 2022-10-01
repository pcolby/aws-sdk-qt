// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASEMETRICDATAREQUEST_P_H
#define QTAWS_GETRELATIONALDATABASEMETRICDATAREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getrelationaldatabasemetricdatarequest.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseMetricDataRequest;

class GetRelationalDatabaseMetricDataRequestPrivate : public LightsailRequestPrivate {

public:
    GetRelationalDatabaseMetricDataRequestPrivate(const LightsailRequest::Action action,
                                   GetRelationalDatabaseMetricDataRequest * const q);
    GetRelationalDatabaseMetricDataRequestPrivate(const GetRelationalDatabaseMetricDataRequestPrivate &other,
                                   GetRelationalDatabaseMetricDataRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRelationalDatabaseMetricDataRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
