// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINPUTROUTINGSRESPONSE_H
#define QTAWS_LISTINPUTROUTINGSRESPONSE_H

#include "ioteventsresponse.h"
#include "listinputroutingsrequest.h"

namespace QtAws {
namespace IoTEvents {

class ListInputRoutingsResponsePrivate;

class QTAWSIOTEVENTS_EXPORT ListInputRoutingsResponse : public IoTEventsResponse {
    Q_OBJECT

public:
    ListInputRoutingsResponse(const ListInputRoutingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListInputRoutingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInputRoutingsResponse)
    Q_DISABLE_COPY(ListInputRoutingsResponse)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
