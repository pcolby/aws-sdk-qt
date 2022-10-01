// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASELOGSTREAMSREQUEST_P_H
#define QTAWS_GETRELATIONALDATABASELOGSTREAMSREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getrelationaldatabaselogstreamsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseLogStreamsRequest;

class GetRelationalDatabaseLogStreamsRequestPrivate : public LightsailRequestPrivate {

public:
    GetRelationalDatabaseLogStreamsRequestPrivate(const LightsailRequest::Action action,
                                   GetRelationalDatabaseLogStreamsRequest * const q);
    GetRelationalDatabaseLogStreamsRequestPrivate(const GetRelationalDatabaseLogStreamsRequestPrivate &other,
                                   GetRelationalDatabaseLogStreamsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRelationalDatabaseLogStreamsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
