// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVOLUMESREQUEST_H
#define QTAWS_LISTVOLUMESREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class ListVolumesRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT ListVolumesRequest : public StorageGatewayRequest {

public:
    ListVolumesRequest(const ListVolumesRequest &other);
    ListVolumesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVolumesRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
