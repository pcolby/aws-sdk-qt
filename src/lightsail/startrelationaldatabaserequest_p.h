// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTRELATIONALDATABASEREQUEST_P_H
#define QTAWS_STARTRELATIONALDATABASEREQUEST_P_H

#include "lightsailrequest_p.h"
#include "startrelationaldatabaserequest.h"

namespace QtAws {
namespace Lightsail {

class StartRelationalDatabaseRequest;

class StartRelationalDatabaseRequestPrivate : public LightsailRequestPrivate {

public:
    StartRelationalDatabaseRequestPrivate(const LightsailRequest::Action action,
                                   StartRelationalDatabaseRequest * const q);
    StartRelationalDatabaseRequestPrivate(const StartRelationalDatabaseRequestPrivate &other,
                                   StartRelationalDatabaseRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartRelationalDatabaseRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
