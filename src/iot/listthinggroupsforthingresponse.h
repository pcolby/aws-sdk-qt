// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHINGGROUPSFORTHINGRESPONSE_H
#define QTAWS_LISTTHINGGROUPSFORTHINGRESPONSE_H

#include "iotresponse.h"
#include "listthinggroupsforthingrequest.h"

namespace QtAws {
namespace IoT {

class ListThingGroupsForThingResponsePrivate;

class QTAWSIOT_EXPORT ListThingGroupsForThingResponse : public IoTResponse {
    Q_OBJECT

public:
    ListThingGroupsForThingResponse(const ListThingGroupsForThingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListThingGroupsForThingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListThingGroupsForThingResponse)
    Q_DISABLE_COPY(ListThingGroupsForThingResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
