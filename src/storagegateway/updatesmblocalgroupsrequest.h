// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESMBLOCALGROUPSREQUEST_H
#define QTAWS_UPDATESMBLOCALGROUPSREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class UpdateSMBLocalGroupsRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT UpdateSMBLocalGroupsRequest : public StorageGatewayRequest {

public:
    UpdateSMBLocalGroupsRequest(const UpdateSMBLocalGroupsRequest &other);
    UpdateSMBLocalGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSMBLocalGroupsRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
