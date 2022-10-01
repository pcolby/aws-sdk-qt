// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASEBLUEPRINTSREQUEST_P_H
#define QTAWS_GETRELATIONALDATABASEBLUEPRINTSREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getrelationaldatabaseblueprintsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseBlueprintsRequest;

class GetRelationalDatabaseBlueprintsRequestPrivate : public LightsailRequestPrivate {

public:
    GetRelationalDatabaseBlueprintsRequestPrivate(const LightsailRequest::Action action,
                                   GetRelationalDatabaseBlueprintsRequest * const q);
    GetRelationalDatabaseBlueprintsRequestPrivate(const GetRelationalDatabaseBlueprintsRequestPrivate &other,
                                   GetRelationalDatabaseBlueprintsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRelationalDatabaseBlueprintsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
