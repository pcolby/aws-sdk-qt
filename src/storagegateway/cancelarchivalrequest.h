// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELARCHIVALREQUEST_H
#define QTAWS_CANCELARCHIVALREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class CancelArchivalRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT CancelArchivalRequest : public StorageGatewayRequest {

public:
    CancelArchivalRequest(const CancelArchivalRequest &other);
    CancelArchivalRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelArchivalRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
