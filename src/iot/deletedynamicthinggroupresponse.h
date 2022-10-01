// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDYNAMICTHINGGROUPRESPONSE_H
#define QTAWS_DELETEDYNAMICTHINGGROUPRESPONSE_H

#include "iotresponse.h"
#include "deletedynamicthinggrouprequest.h"

namespace QtAws {
namespace IoT {

class DeleteDynamicThingGroupResponsePrivate;

class QTAWSIOT_EXPORT DeleteDynamicThingGroupResponse : public IoTResponse {
    Q_OBJECT

public:
    DeleteDynamicThingGroupResponse(const DeleteDynamicThingGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDynamicThingGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDynamicThingGroupResponse)
    Q_DISABLE_COPY(DeleteDynamicThingGroupResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
