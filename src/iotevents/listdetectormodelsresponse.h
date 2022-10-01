// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDETECTORMODELSRESPONSE_H
#define QTAWS_LISTDETECTORMODELSRESPONSE_H

#include "ioteventsresponse.h"
#include "listdetectormodelsrequest.h"

namespace QtAws {
namespace IoTEvents {

class ListDetectorModelsResponsePrivate;

class QTAWSIOTEVENTS_EXPORT ListDetectorModelsResponse : public IoTEventsResponse {
    Q_OBJECT

public:
    ListDetectorModelsResponse(const ListDetectorModelsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDetectorModelsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDetectorModelsResponse)
    Q_DISABLE_COPY(ListDetectorModelsResponse)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
