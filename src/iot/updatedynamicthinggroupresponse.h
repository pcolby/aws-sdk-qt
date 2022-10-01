// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDYNAMICTHINGGROUPRESPONSE_H
#define QTAWS_UPDATEDYNAMICTHINGGROUPRESPONSE_H

#include "iotresponse.h"
#include "updatedynamicthinggrouprequest.h"

namespace QtAws {
namespace IoT {

class UpdateDynamicThingGroupResponsePrivate;

class QTAWSIOT_EXPORT UpdateDynamicThingGroupResponse : public IoTResponse {
    Q_OBJECT

public:
    UpdateDynamicThingGroupResponse(const UpdateDynamicThingGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDynamicThingGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDynamicThingGroupResponse)
    Q_DISABLE_COPY(UpdateDynamicThingGroupResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
