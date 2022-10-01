// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETHINGGROUPRESPONSE_H
#define QTAWS_DELETETHINGGROUPRESPONSE_H

#include "iotresponse.h"
#include "deletethinggrouprequest.h"

namespace QtAws {
namespace IoT {

class DeleteThingGroupResponsePrivate;

class QTAWSIOT_EXPORT DeleteThingGroupResponse : public IoTResponse {
    Q_OBJECT

public:
    DeleteThingGroupResponse(const DeleteThingGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteThingGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteThingGroupResponse)
    Q_DISABLE_COPY(DeleteThingGroupResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
