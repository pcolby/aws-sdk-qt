// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVOLUMERECOVERYPOINTSREQUEST_H
#define QTAWS_LISTVOLUMERECOVERYPOINTSREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class ListVolumeRecoveryPointsRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT ListVolumeRecoveryPointsRequest : public StorageGatewayRequest {

public:
    ListVolumeRecoveryPointsRequest(const ListVolumeRecoveryPointsRequest &other);
    ListVolumeRecoveryPointsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVolumeRecoveryPointsRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
