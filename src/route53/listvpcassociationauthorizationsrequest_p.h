// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVPCASSOCIATIONAUTHORIZATIONSREQUEST_P_H
#define QTAWS_LISTVPCASSOCIATIONAUTHORIZATIONSREQUEST_P_H

#include "route53request_p.h"
#include "listvpcassociationauthorizationsrequest.h"

namespace QtAws {
namespace Route53 {

class ListVPCAssociationAuthorizationsRequest;

class ListVPCAssociationAuthorizationsRequestPrivate : public Route53RequestPrivate {

public:
    ListVPCAssociationAuthorizationsRequestPrivate(const Route53Request::Action action,
                                   ListVPCAssociationAuthorizationsRequest * const q);
    ListVPCAssociationAuthorizationsRequestPrivate(const ListVPCAssociationAuthorizationsRequestPrivate &other,
                                   ListVPCAssociationAuthorizationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListVPCAssociationAuthorizationsRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
