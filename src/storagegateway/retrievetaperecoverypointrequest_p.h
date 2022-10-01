// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETRIEVETAPERECOVERYPOINTREQUEST_P_H
#define QTAWS_RETRIEVETAPERECOVERYPOINTREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "retrievetaperecoverypointrequest.h"

namespace QtAws {
namespace StorageGateway {

class RetrieveTapeRecoveryPointRequest;

class RetrieveTapeRecoveryPointRequestPrivate : public StorageGatewayRequestPrivate {

public:
    RetrieveTapeRecoveryPointRequestPrivate(const StorageGatewayRequest::Action action,
                                   RetrieveTapeRecoveryPointRequest * const q);
    RetrieveTapeRecoveryPointRequestPrivate(const RetrieveTapeRecoveryPointRequestPrivate &other,
                                   RetrieveTapeRecoveryPointRequest * const q);

private:
    Q_DECLARE_PUBLIC(RetrieveTapeRecoveryPointRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
