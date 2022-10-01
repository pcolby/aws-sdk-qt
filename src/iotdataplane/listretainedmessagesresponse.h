// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRETAINEDMESSAGESRESPONSE_H
#define QTAWS_LISTRETAINEDMESSAGESRESPONSE_H

#include "iotdataplaneresponse.h"
#include "listretainedmessagesrequest.h"

namespace QtAws {
namespace IoTDataPlane {

class ListRetainedMessagesResponsePrivate;

class QTAWSIOTDATAPLANE_EXPORT ListRetainedMessagesResponse : public IoTDataPlaneResponse {
    Q_OBJECT

public:
    ListRetainedMessagesResponse(const ListRetainedMessagesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRetainedMessagesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRetainedMessagesResponse)
    Q_DISABLE_COPY(ListRetainedMessagesResponse)

};

} // namespace IoTDataPlane
} // namespace QtAws

#endif
