// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAPESREQUEST_H
#define QTAWS_LISTTAPESREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class ListTapesRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT ListTapesRequest : public StorageGatewayRequest {

public:
    ListTapesRequest(const ListTapesRequest &other);
    ListTapesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTapesRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
