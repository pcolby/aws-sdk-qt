// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESMBLOCALGROUPSREQUEST_P_H
#define QTAWS_UPDATESMBLOCALGROUPSREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "updatesmblocalgroupsrequest.h"

namespace QtAws {
namespace StorageGateway {

class UpdateSMBLocalGroupsRequest;

class UpdateSMBLocalGroupsRequestPrivate : public StorageGatewayRequestPrivate {

public:
    UpdateSMBLocalGroupsRequestPrivate(const StorageGatewayRequest::Action action,
                                   UpdateSMBLocalGroupsRequest * const q);
    UpdateSMBLocalGroupsRequestPrivate(const UpdateSMBLocalGroupsRequestPrivate &other,
                                   UpdateSMBLocalGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSMBLocalGroupsRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
