// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NOTIFYWHENUPLOADEDREQUEST_H
#define QTAWS_NOTIFYWHENUPLOADEDREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class NotifyWhenUploadedRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT NotifyWhenUploadedRequest : public StorageGatewayRequest {

public:
    NotifyWhenUploadedRequest(const NotifyWhenUploadedRequest &other);
    NotifyWhenUploadedRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(NotifyWhenUploadedRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
