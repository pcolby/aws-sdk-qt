// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICEEVENTSRESPONSE_H
#define QTAWS_LISTDEVICEEVENTSRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "listdeviceeventsrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class ListDeviceEventsResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT ListDeviceEventsResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    ListDeviceEventsResponse(const ListDeviceEventsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDeviceEventsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDeviceEventsResponse)
    Q_DISABLE_COPY(ListDeviceEventsResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
