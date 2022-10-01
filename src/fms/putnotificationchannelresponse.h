// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTNOTIFICATIONCHANNELRESPONSE_H
#define QTAWS_PUTNOTIFICATIONCHANNELRESPONSE_H

#include "fmsresponse.h"
#include "putnotificationchannelrequest.h"

namespace QtAws {
namespace Fms {

class PutNotificationChannelResponsePrivate;

class QTAWSFMS_EXPORT PutNotificationChannelResponse : public FmsResponse {
    Q_OBJECT

public:
    PutNotificationChannelResponse(const PutNotificationChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutNotificationChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutNotificationChannelResponse)
    Q_DISABLE_COPY(PutNotificationChannelResponse)

};

} // namespace Fms
} // namespace QtAws

#endif
