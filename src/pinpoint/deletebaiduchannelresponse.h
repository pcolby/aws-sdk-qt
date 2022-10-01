// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBAIDUCHANNELRESPONSE_H
#define QTAWS_DELETEBAIDUCHANNELRESPONSE_H

#include "pinpointresponse.h"
#include "deletebaiduchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteBaiduChannelResponsePrivate;

class QTAWSPINPOINT_EXPORT DeleteBaiduChannelResponse : public PinpointResponse {
    Q_OBJECT

public:
    DeleteBaiduChannelResponse(const DeleteBaiduChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBaiduChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBaiduChannelResponse)
    Q_DISABLE_COPY(DeleteBaiduChannelResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
