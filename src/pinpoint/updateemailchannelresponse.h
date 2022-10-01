// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEMAILCHANNELRESPONSE_H
#define QTAWS_UPDATEEMAILCHANNELRESPONSE_H

#include "pinpointresponse.h"
#include "updateemailchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateEmailChannelResponsePrivate;

class QTAWSPINPOINT_EXPORT UpdateEmailChannelResponse : public PinpointResponse {
    Q_OBJECT

public:
    UpdateEmailChannelResponse(const UpdateEmailChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateEmailChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEmailChannelResponse)
    Q_DISABLE_COPY(UpdateEmailChannelResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
