// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDYNAMICTHINGGROUPRESPONSE_H
#define QTAWS_CREATEDYNAMICTHINGGROUPRESPONSE_H

#include "iotresponse.h"
#include "createdynamicthinggrouprequest.h"

namespace QtAws {
namespace IoT {

class CreateDynamicThingGroupResponsePrivate;

class QTAWSIOT_EXPORT CreateDynamicThingGroupResponse : public IoTResponse {
    Q_OBJECT

public:
    CreateDynamicThingGroupResponse(const CreateDynamicThingGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDynamicThingGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDynamicThingGroupResponse)
    Q_DISABLE_COPY(CreateDynamicThingGroupResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
