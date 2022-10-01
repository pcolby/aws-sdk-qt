// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTRELATIONALDATABASEREQUEST_P_H
#define QTAWS_REBOOTRELATIONALDATABASEREQUEST_P_H

#include "lightsailrequest_p.h"
#include "rebootrelationaldatabaserequest.h"

namespace QtAws {
namespace Lightsail {

class RebootRelationalDatabaseRequest;

class RebootRelationalDatabaseRequestPrivate : public LightsailRequestPrivate {

public:
    RebootRelationalDatabaseRequestPrivate(const LightsailRequest::Action action,
                                   RebootRelationalDatabaseRequest * const q);
    RebootRelationalDatabaseRequestPrivate(const RebootRelationalDatabaseRequestPrivate &other,
                                   RebootRelationalDatabaseRequest * const q);

private:
    Q_DECLARE_PUBLIC(RebootRelationalDatabaseRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
