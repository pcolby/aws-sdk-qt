// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDETECTORMODELVERSIONSRESPONSE_H
#define QTAWS_LISTDETECTORMODELVERSIONSRESPONSE_H

#include "ioteventsresponse.h"
#include "listdetectormodelversionsrequest.h"

namespace QtAws {
namespace IoTEvents {

class ListDetectorModelVersionsResponsePrivate;

class QTAWSIOTEVENTS_EXPORT ListDetectorModelVersionsResponse : public IoTEventsResponse {
    Q_OBJECT

public:
    ListDetectorModelVersionsResponse(const ListDetectorModelVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDetectorModelVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDetectorModelVersionsResponse)
    Q_DISABLE_COPY(ListDetectorModelVersionsResponse)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
