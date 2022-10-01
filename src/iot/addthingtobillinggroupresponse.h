// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDTHINGTOBILLINGGROUPRESPONSE_H
#define QTAWS_ADDTHINGTOBILLINGGROUPRESPONSE_H

#include "iotresponse.h"
#include "addthingtobillinggrouprequest.h"

namespace QtAws {
namespace IoT {

class AddThingToBillingGroupResponsePrivate;

class QTAWSIOT_EXPORT AddThingToBillingGroupResponse : public IoTResponse {
    Q_OBJECT

public:
    AddThingToBillingGroupResponse(const AddThingToBillingGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddThingToBillingGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddThingToBillingGroupResponse)
    Q_DISABLE_COPY(AddThingToBillingGroupResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
