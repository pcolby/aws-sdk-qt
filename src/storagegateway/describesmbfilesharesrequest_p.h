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

#ifndef QTAWS_DESCRIBESMBFILESHARESREQUEST_P_H
#define QTAWS_DESCRIBESMBFILESHARESREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "describesmbfilesharesrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeSMBFileSharesRequest;

class QTAWS_EXPORT DescribeSMBFileSharesRequestPrivate : public StorageGatewayRequestPrivate {

public:
    DescribeSMBFileSharesRequestPrivate(const StorageGatewayRequest::Action action,
                                   DescribeSMBFileSharesRequest * const q);
    DescribeSMBFileSharesRequestPrivate(const DescribeSMBFileSharesRequestPrivate &other,
                                   DescribeSMBFileSharesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSMBFileSharesRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
