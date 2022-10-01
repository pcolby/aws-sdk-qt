// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNOTIFICATIONCHANNELSRESPONSE_H
#define QTAWS_LISTNOTIFICATIONCHANNELSRESPONSE_H

#include "devopsgururesponse.h"
#include "listnotificationchannelsrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class ListNotificationChannelsResponsePrivate;

class QTAWSDEVOPSGURU_EXPORT ListNotificationChannelsResponse : public DevOpsGuruResponse {
    Q_OBJECT

public:
    ListNotificationChannelsResponse(const ListNotificationChannelsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListNotificationChannelsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListNotificationChannelsResponse)
    Q_DISABLE_COPY(ListNotificationChannelsResponse)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
