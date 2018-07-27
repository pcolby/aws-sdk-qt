/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_ENABLEDOMAINTRANSFERLOCKRESPONSE_H
#define QTAWS_ENABLEDOMAINTRANSFERLOCKRESPONSE_H

#include "route53domainsresponse.h"
#include "enabledomaintransferlockrequest.h"

namespace QtAws {
namespace Route53Domains {

class EnableDomainTransferLockResponsePrivate;

class QTAWS_EXPORT EnableDomainTransferLockResponse : public Route53DomainsResponse {
    Q_OBJECT

public:
    EnableDomainTransferLockResponse(const EnableDomainTransferLockRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableDomainTransferLockRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableDomainTransferLockResponse)
    Q_DISABLE_COPY(EnableDomainTransferLockResponse)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
