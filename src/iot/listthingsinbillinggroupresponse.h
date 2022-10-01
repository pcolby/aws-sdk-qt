// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHINGSINBILLINGGROUPRESPONSE_H
#define QTAWS_LISTTHINGSINBILLINGGROUPRESPONSE_H

#include "iotresponse.h"
#include "listthingsinbillinggrouprequest.h"

namespace QtAws {
namespace IoT {

class ListThingsInBillingGroupResponsePrivate;

class QTAWSIOT_EXPORT ListThingsInBillingGroupResponse : public IoTResponse {
    Q_OBJECT

public:
    ListThingsInBillingGroupResponse(const ListThingsInBillingGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListThingsInBillingGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListThingsInBillingGroupResponse)
    Q_DISABLE_COPY(ListThingsInBillingGroupResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
