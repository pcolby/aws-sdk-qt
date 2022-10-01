// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICELASTACCESSEDDETAILSWITHENTITIESREQUEST_P_H
#define QTAWS_GETSERVICELASTACCESSEDDETAILSWITHENTITIESREQUEST_P_H

#include "iamrequest_p.h"
#include "getservicelastaccesseddetailswithentitiesrequest.h"

namespace QtAws {
namespace Iam {

class GetServiceLastAccessedDetailsWithEntitiesRequest;

class GetServiceLastAccessedDetailsWithEntitiesRequestPrivate : public IamRequestPrivate {

public:
    GetServiceLastAccessedDetailsWithEntitiesRequestPrivate(const IamRequest::Action action,
                                   GetServiceLastAccessedDetailsWithEntitiesRequest * const q);
    GetServiceLastAccessedDetailsWithEntitiesRequestPrivate(const GetServiceLastAccessedDetailsWithEntitiesRequestPrivate &other,
                                   GetServiceLastAccessedDetailsWithEntitiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetServiceLastAccessedDetailsWithEntitiesRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
