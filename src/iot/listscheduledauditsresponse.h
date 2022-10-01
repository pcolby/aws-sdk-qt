// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCHEDULEDAUDITSRESPONSE_H
#define QTAWS_LISTSCHEDULEDAUDITSRESPONSE_H

#include "iotresponse.h"
#include "listscheduledauditsrequest.h"

namespace QtAws {
namespace IoT {

class ListScheduledAuditsResponsePrivate;

class QTAWSIOT_EXPORT ListScheduledAuditsResponse : public IoTResponse {
    Q_OBJECT

public:
    ListScheduledAuditsResponse(const ListScheduledAuditsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListScheduledAuditsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListScheduledAuditsResponse)
    Q_DISABLE_COPY(ListScheduledAuditsResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
