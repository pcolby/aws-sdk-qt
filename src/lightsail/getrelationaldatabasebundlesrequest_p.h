// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASEBUNDLESREQUEST_P_H
#define QTAWS_GETRELATIONALDATABASEBUNDLESREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getrelationaldatabasebundlesrequest.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseBundlesRequest;

class GetRelationalDatabaseBundlesRequestPrivate : public LightsailRequestPrivate {

public:
    GetRelationalDatabaseBundlesRequestPrivate(const LightsailRequest::Action action,
                                   GetRelationalDatabaseBundlesRequest * const q);
    GetRelationalDatabaseBundlesRequestPrivate(const GetRelationalDatabaseBundlesRequestPrivate &other,
                                   GetRelationalDatabaseBundlesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRelationalDatabaseBundlesRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
