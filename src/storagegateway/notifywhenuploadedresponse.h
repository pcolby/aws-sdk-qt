// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NOTIFYWHENUPLOADEDRESPONSE_H
#define QTAWS_NOTIFYWHENUPLOADEDRESPONSE_H

#include "storagegatewayresponse.h"
#include "notifywhenuploadedrequest.h"

namespace QtAws {
namespace StorageGateway {

class NotifyWhenUploadedResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT NotifyWhenUploadedResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    NotifyWhenUploadedResponse(const NotifyWhenUploadedRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const NotifyWhenUploadedRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(NotifyWhenUploadedResponse)
    Q_DISABLE_COPY(NotifyWhenUploadedResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
