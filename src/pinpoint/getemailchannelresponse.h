// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEMAILCHANNELRESPONSE_H
#define QTAWS_GETEMAILCHANNELRESPONSE_H

#include "pinpointresponse.h"
#include "getemailchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetEmailChannelResponsePrivate;

class QTAWSPINPOINT_EXPORT GetEmailChannelResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetEmailChannelResponse(const GetEmailChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEmailChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEmailChannelResponse)
    Q_DISABLE_COPY(GetEmailChannelResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
