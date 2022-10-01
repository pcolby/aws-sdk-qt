// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NOTIFYWHENUPLOADEDREQUEST_P_H
#define QTAWS_NOTIFYWHENUPLOADEDREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "notifywhenuploadedrequest.h"

namespace QtAws {
namespace StorageGateway {

class NotifyWhenUploadedRequest;

class NotifyWhenUploadedRequestPrivate : public StorageGatewayRequestPrivate {

public:
    NotifyWhenUploadedRequestPrivate(const StorageGatewayRequest::Action action,
                                   NotifyWhenUploadedRequest * const q);
    NotifyWhenUploadedRequestPrivate(const NotifyWhenUploadedRequestPrivate &other,
                                   NotifyWhenUploadedRequest * const q);

private:
    Q_DECLARE_PUBLIC(NotifyWhenUploadedRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
