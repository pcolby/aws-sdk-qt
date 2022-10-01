// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDNOTIFICATIONCHANNELRESPONSE_H
#define QTAWS_ADDNOTIFICATIONCHANNELRESPONSE_H

#include "devopsgururesponse.h"
#include "addnotificationchannelrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class AddNotificationChannelResponsePrivate;

class QTAWSDEVOPSGURU_EXPORT AddNotificationChannelResponse : public DevOpsGuruResponse {
    Q_OBJECT

public:
    AddNotificationChannelResponse(const AddNotificationChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddNotificationChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddNotificationChannelResponse)
    Q_DISABLE_COPY(AddNotificationChannelResponse)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
