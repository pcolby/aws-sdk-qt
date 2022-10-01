// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECACHEREQUEST_H
#define QTAWS_DESCRIBECACHEREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeCacheRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DescribeCacheRequest : public StorageGatewayRequest {

public:
    DescribeCacheRequest(const DescribeCacheRequest &other);
    DescribeCacheRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCacheRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
