// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NOTIFYWHENUPLOADEDRESPONSE_P_H
#define QTAWS_NOTIFYWHENUPLOADEDRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class NotifyWhenUploadedResponse;

class NotifyWhenUploadedResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit NotifyWhenUploadedResponsePrivate(NotifyWhenUploadedResponse * const q);

    void parseNotifyWhenUploadedResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(NotifyWhenUploadedResponse)
    Q_DISABLE_COPY(NotifyWhenUploadedResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
