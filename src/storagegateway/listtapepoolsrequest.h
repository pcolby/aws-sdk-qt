// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAPEPOOLSREQUEST_H
#define QTAWS_LISTTAPEPOOLSREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class ListTapePoolsRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT ListTapePoolsRequest : public StorageGatewayRequest {

public:
    ListTapePoolsRequest(const ListTapePoolsRequest &other);
    ListTapePoolsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTapePoolsRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
