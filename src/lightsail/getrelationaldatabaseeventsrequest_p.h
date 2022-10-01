// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASEEVENTSREQUEST_P_H
#define QTAWS_GETRELATIONALDATABASEEVENTSREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getrelationaldatabaseeventsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseEventsRequest;

class GetRelationalDatabaseEventsRequestPrivate : public LightsailRequestPrivate {

public:
    GetRelationalDatabaseEventsRequestPrivate(const LightsailRequest::Action action,
                                   GetRelationalDatabaseEventsRequest * const q);
    GetRelationalDatabaseEventsRequestPrivate(const GetRelationalDatabaseEventsRequestPrivate &other,
                                   GetRelationalDatabaseEventsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRelationalDatabaseEventsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
