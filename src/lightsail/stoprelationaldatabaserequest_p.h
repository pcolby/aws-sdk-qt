// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPRELATIONALDATABASEREQUEST_P_H
#define QTAWS_STOPRELATIONALDATABASEREQUEST_P_H

#include "lightsailrequest_p.h"
#include "stoprelationaldatabaserequest.h"

namespace QtAws {
namespace Lightsail {

class StopRelationalDatabaseRequest;

class StopRelationalDatabaseRequestPrivate : public LightsailRequestPrivate {

public:
    StopRelationalDatabaseRequestPrivate(const LightsailRequest::Action action,
                                   StopRelationalDatabaseRequest * const q);
    StopRelationalDatabaseRequestPrivate(const StopRelationalDatabaseRequestPrivate &other,
                                   StopRelationalDatabaseRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopRelationalDatabaseRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
