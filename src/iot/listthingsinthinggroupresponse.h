// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHINGSINTHINGGROUPRESPONSE_H
#define QTAWS_LISTTHINGSINTHINGGROUPRESPONSE_H

#include "iotresponse.h"
#include "listthingsinthinggrouprequest.h"

namespace QtAws {
namespace IoT {

class ListThingsInThingGroupResponsePrivate;

class QTAWSIOT_EXPORT ListThingsInThingGroupResponse : public IoTResponse {
    Q_OBJECT

public:
    ListThingsInThingGroupResponse(const ListThingsInThingGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListThingsInThingGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListThingsInThingGroupResponse)
    Q_DISABLE_COPY(ListThingsInThingGroupResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
