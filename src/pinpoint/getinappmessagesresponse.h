// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINAPPMESSAGESRESPONSE_H
#define QTAWS_GETINAPPMESSAGESRESPONSE_H

#include "pinpointresponse.h"
#include "getinappmessagesrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetInAppMessagesResponsePrivate;

class QTAWSPINPOINT_EXPORT GetInAppMessagesResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetInAppMessagesResponse(const GetInAppMessagesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetInAppMessagesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInAppMessagesResponse)
    Q_DISABLE_COPY(GetInAppMessagesResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
