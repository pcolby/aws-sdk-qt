// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBAIDUCHANNELRESPONSE_H
#define QTAWS_UPDATEBAIDUCHANNELRESPONSE_H

#include "pinpointresponse.h"
#include "updatebaiduchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateBaiduChannelResponsePrivate;

class QTAWSPINPOINT_EXPORT UpdateBaiduChannelResponse : public PinpointResponse {
    Q_OBJECT

public:
    UpdateBaiduChannelResponse(const UpdateBaiduChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateBaiduChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBaiduChannelResponse)
    Q_DISABLE_COPY(UpdateBaiduChannelResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
