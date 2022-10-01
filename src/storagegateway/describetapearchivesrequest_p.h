// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETAPEARCHIVESREQUEST_P_H
#define QTAWS_DESCRIBETAPEARCHIVESREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "describetapearchivesrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeTapeArchivesRequest;

class DescribeTapeArchivesRequestPrivate : public StorageGatewayRequestPrivate {

public:
    DescribeTapeArchivesRequestPrivate(const StorageGatewayRequest::Action action,
                                   DescribeTapeArchivesRequest * const q);
    DescribeTapeArchivesRequestPrivate(const DescribeTapeArchivesRequestPrivate &other,
                                   DescribeTapeArchivesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTapeArchivesRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
