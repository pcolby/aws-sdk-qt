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

#ifndef QTAWS_DELETERESOLVERQUERYLOGCONFIGRESPONSE_H
#define QTAWS_DELETERESOLVERQUERYLOGCONFIGRESPONSE_H

#include "route53resolverresponse.h"
#include "deleteresolverquerylogconfigrequest.h"

namespace QtAws {
namespace Route53Resolver {

class DeleteResolverQueryLogConfigResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT DeleteResolverQueryLogConfigResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    DeleteResolverQueryLogConfigResponse(const DeleteResolverQueryLogConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteResolverQueryLogConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteResolverQueryLogConfigResponse)
    Q_DISABLE_COPY(DeleteResolverQueryLogConfigResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
