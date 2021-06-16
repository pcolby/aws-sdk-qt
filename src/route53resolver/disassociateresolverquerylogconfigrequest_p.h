/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DISASSOCIATERESOLVERQUERYLOGCONFIGREQUEST_P_H
#define QTAWS_DISASSOCIATERESOLVERQUERYLOGCONFIGREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "disassociateresolverquerylogconfigrequest.h"

namespace QtAws {
namespace Route53Resolver {

class DisassociateResolverQueryLogConfigRequest;

class QTAWS_EXPORT DisassociateResolverQueryLogConfigRequestPrivate : public Route53ResolverRequestPrivate {

public:
    DisassociateResolverQueryLogConfigRequestPrivate(const Route53ResolverRequest::Action action,
                                   DisassociateResolverQueryLogConfigRequest * const q);
    DisassociateResolverQueryLogConfigRequestPrivate(const DisassociateResolverQueryLogConfigRequestPrivate &other,
                                   DisassociateResolverQueryLogConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateResolverQueryLogConfigRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
