// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETAPEARCHIVESREQUEST_H
#define QTAWS_DESCRIBETAPEARCHIVESREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeTapeArchivesRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DescribeTapeArchivesRequest : public StorageGatewayRequest {

public:
    DescribeTapeArchivesRequest(const DescribeTapeArchivesRequest &other);
    DescribeTapeArchivesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTapeArchivesRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
