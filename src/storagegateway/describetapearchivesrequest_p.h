/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DESCRIBETAPEARCHIVESREQUEST_P_H
#define QTAWS_DESCRIBETAPEARCHIVESREQUEST_P_H

#include "storagegateway_p.h"
#include "describetapearchivesrequest.h"

namespace AWS {

namespace StorageGateway {

class DescribeTapeArchivesRequest;

class QTAWS_EXPORT DescribeTapeArchivesRequestPrivate : public StorageGatewayPrivate {

public:
    DescribeTapeArchivesRequestPrivate(const StorageGateway::Action action,
                                   DescribeTapeArchivesRequest * const q);
    DescribeTapeArchivesRequestPrivate(const DescribeTapeArchivesRequestPrivate &other,
                                   DescribeTapeArchivesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTapeArchivesRequest)

};

} // namespace StorageGateway
} // namespace AWS

#endif
