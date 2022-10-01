// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHINGGROUPRESPONSE_H
#define QTAWS_UPDATETHINGGROUPRESPONSE_H

#include "iotresponse.h"
#include "updatethinggrouprequest.h"

namespace QtAws {
namespace IoT {

class UpdateThingGroupResponsePrivate;

class QTAWSIOT_EXPORT UpdateThingGroupResponse : public IoTResponse {
    Q_OBJECT

public:
    UpdateThingGroupResponse(const UpdateThingGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateThingGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateThingGroupResponse)
    Q_DISABLE_COPY(UpdateThingGroupResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
