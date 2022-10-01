// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETRIEVETAPEARCHIVEREQUEST_H
#define QTAWS_RETRIEVETAPEARCHIVEREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class RetrieveTapeArchiveRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT RetrieveTapeArchiveRequest : public StorageGatewayRequest {

public:
    RetrieveTapeArchiveRequest(const RetrieveTapeArchiveRequest &other);
    RetrieveTapeArchiveRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RetrieveTapeArchiveRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
