// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASEREQUEST_P_H
#define QTAWS_GETRELATIONALDATABASEREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getrelationaldatabaserequest.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseRequest;

class GetRelationalDatabaseRequestPrivate : public LightsailRequestPrivate {

public:
    GetRelationalDatabaseRequestPrivate(const LightsailRequest::Action action,
                                   GetRelationalDatabaseRequest * const q);
    GetRelationalDatabaseRequestPrivate(const GetRelationalDatabaseRequestPrivate &other,
                                   GetRelationalDatabaseRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRelationalDatabaseRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
