// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHINGGROUPSFORTHINGRESPONSE_H
#define QTAWS_UPDATETHINGGROUPSFORTHINGRESPONSE_H

#include "iotresponse.h"
#include "updatethinggroupsforthingrequest.h"

namespace QtAws {
namespace IoT {

class UpdateThingGroupsForThingResponsePrivate;

class QTAWSIOT_EXPORT UpdateThingGroupsForThingResponse : public IoTResponse {
    Q_OBJECT

public:
    UpdateThingGroupsForThingResponse(const UpdateThingGroupsForThingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateThingGroupsForThingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateThingGroupsForThingResponse)
    Q_DISABLE_COPY(UpdateThingGroupsForThingResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
