// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETHINGFROMTHINGGROUPRESPONSE_H
#define QTAWS_REMOVETHINGFROMTHINGGROUPRESPONSE_H

#include "iotresponse.h"
#include "removethingfromthinggrouprequest.h"

namespace QtAws {
namespace IoT {

class RemoveThingFromThingGroupResponsePrivate;

class QTAWSIOT_EXPORT RemoveThingFromThingGroupResponse : public IoTResponse {
    Q_OBJECT

public:
    RemoveThingFromThingGroupResponse(const RemoveThingFromThingGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveThingFromThingGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveThingFromThingGroupResponse)
    Q_DISABLE_COPY(RemoveThingFromThingGroupResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
