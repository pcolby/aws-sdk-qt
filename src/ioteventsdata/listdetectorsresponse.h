// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDETECTORSRESPONSE_H
#define QTAWS_LISTDETECTORSRESPONSE_H

#include "ioteventsdataresponse.h"
#include "listdetectorsrequest.h"

namespace QtAws {
namespace IoTEventsData {

class ListDetectorsResponsePrivate;

class QTAWSIOTEVENTSDATA_EXPORT ListDetectorsResponse : public IoTEventsDataResponse {
    Q_OBJECT

public:
    ListDetectorsResponse(const ListDetectorsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDetectorsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDetectorsResponse)
    Q_DISABLE_COPY(ListDetectorsResponse)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
