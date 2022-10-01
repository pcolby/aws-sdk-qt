// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENOTIFICATIONCHANNELRESPONSE_H
#define QTAWS_DELETENOTIFICATIONCHANNELRESPONSE_H

#include "fmsresponse.h"
#include "deletenotificationchannelrequest.h"

namespace QtAws {
namespace Fms {

class DeleteNotificationChannelResponsePrivate;

class QTAWSFMS_EXPORT DeleteNotificationChannelResponse : public FmsResponse {
    Q_OBJECT

public:
    DeleteNotificationChannelResponse(const DeleteNotificationChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteNotificationChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNotificationChannelResponse)
    Q_DISABLE_COPY(DeleteNotificationChannelResponse)

};

} // namespace Fms
} // namespace QtAws

#endif
