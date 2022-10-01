// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETRIEVETAPEARCHIVEREQUEST_P_H
#define QTAWS_RETRIEVETAPEARCHIVEREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "retrievetapearchiverequest.h"

namespace QtAws {
namespace StorageGateway {

class RetrieveTapeArchiveRequest;

class RetrieveTapeArchiveRequestPrivate : public StorageGatewayRequestPrivate {

public:
    RetrieveTapeArchiveRequestPrivate(const StorageGatewayRequest::Action action,
                                   RetrieveTapeArchiveRequest * const q);
    RetrieveTapeArchiveRequestPrivate(const RetrieveTapeArchiveRequestPrivate &other,
                                   RetrieveTapeArchiveRequest * const q);

private:
    Q_DECLARE_PUBLIC(RetrieveTapeArchiveRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
