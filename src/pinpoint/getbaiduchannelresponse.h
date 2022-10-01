// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBAIDUCHANNELRESPONSE_H
#define QTAWS_GETBAIDUCHANNELRESPONSE_H

#include "pinpointresponse.h"
#include "getbaiduchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetBaiduChannelResponsePrivate;

class QTAWSPINPOINT_EXPORT GetBaiduChannelResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetBaiduChannelResponse(const GetBaiduChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBaiduChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBaiduChannelResponse)
    Q_DISABLE_COPY(GetBaiduChannelResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
