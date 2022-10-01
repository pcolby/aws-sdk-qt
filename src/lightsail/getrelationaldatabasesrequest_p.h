// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASESREQUEST_P_H
#define QTAWS_GETRELATIONALDATABASESREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getrelationaldatabasesrequest.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabasesRequest;

class GetRelationalDatabasesRequestPrivate : public LightsailRequestPrivate {

public:
    GetRelationalDatabasesRequestPrivate(const LightsailRequest::Action action,
                                   GetRelationalDatabasesRequest * const q);
    GetRelationalDatabasesRequestPrivate(const GetRelationalDatabasesRequestPrivate &other,
                                   GetRelationalDatabasesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRelationalDatabasesRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
