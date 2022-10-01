// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETHINGFROMBILLINGGROUPRESPONSE_H
#define QTAWS_REMOVETHINGFROMBILLINGGROUPRESPONSE_H

#include "iotresponse.h"
#include "removethingfrombillinggrouprequest.h"

namespace QtAws {
namespace IoT {

class RemoveThingFromBillingGroupResponsePrivate;

class QTAWSIOT_EXPORT RemoveThingFromBillingGroupResponse : public IoTResponse {
    Q_OBJECT

public:
    RemoveThingFromBillingGroupResponse(const RemoveThingFromBillingGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveThingFromBillingGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveThingFromBillingGroupResponse)
    Q_DISABLE_COPY(RemoveThingFromBillingGroupResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
