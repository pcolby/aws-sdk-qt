// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASELOGEVENTSREQUEST_P_H
#define QTAWS_GETRELATIONALDATABASELOGEVENTSREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getrelationaldatabaselogeventsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseLogEventsRequest;

class GetRelationalDatabaseLogEventsRequestPrivate : public LightsailRequestPrivate {

public:
    GetRelationalDatabaseLogEventsRequestPrivate(const LightsailRequest::Action action,
                                   GetRelationalDatabaseLogEventsRequest * const q);
    GetRelationalDatabaseLogEventsRequestPrivate(const GetRelationalDatabaseLogEventsRequestPrivate &other,
                                   GetRelationalDatabaseLogEventsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRelationalDatabaseLogEventsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
