// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETAPESREQUEST_H
#define QTAWS_DESCRIBETAPESREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeTapesRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DescribeTapesRequest : public StorageGatewayRequest {

public:
    DescribeTapesRequest(const DescribeTapesRequest &other);
    DescribeTapesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTapesRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
