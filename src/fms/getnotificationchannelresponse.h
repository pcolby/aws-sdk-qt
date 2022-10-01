// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNOTIFICATIONCHANNELRESPONSE_H
#define QTAWS_GETNOTIFICATIONCHANNELRESPONSE_H

#include "fmsresponse.h"
#include "getnotificationchannelrequest.h"

namespace QtAws {
namespace Fms {

class GetNotificationChannelResponsePrivate;

class QTAWSFMS_EXPORT GetNotificationChannelResponse : public FmsResponse {
    Q_OBJECT

public:
    GetNotificationChannelResponse(const GetNotificationChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetNotificationChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetNotificationChannelResponse)
    Q_DISABLE_COPY(GetNotificationChannelResponse)

};

} // namespace Fms
} // namespace QtAws

#endif
