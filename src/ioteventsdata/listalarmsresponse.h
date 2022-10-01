// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALARMSRESPONSE_H
#define QTAWS_LISTALARMSRESPONSE_H

#include "ioteventsdataresponse.h"
#include "listalarmsrequest.h"

namespace QtAws {
namespace IoTEventsData {

class ListAlarmsResponsePrivate;

class QTAWSIOTEVENTSDATA_EXPORT ListAlarmsResponse : public IoTEventsDataResponse {
    Q_OBJECT

public:
    ListAlarmsResponse(const ListAlarmsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAlarmsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAlarmsResponse)
    Q_DISABLE_COPY(ListAlarmsResponse)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
