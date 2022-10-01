// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEMAILCHANNELRESPONSE_H
#define QTAWS_DELETEEMAILCHANNELRESPONSE_H

#include "pinpointresponse.h"
#include "deleteemailchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteEmailChannelResponsePrivate;

class QTAWSPINPOINT_EXPORT DeleteEmailChannelResponse : public PinpointResponse {
    Q_OBJECT

public:
    DeleteEmailChannelResponse(const DeleteEmailChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteEmailChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEmailChannelResponse)
    Q_DISABLE_COPY(DeleteEmailChannelResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
