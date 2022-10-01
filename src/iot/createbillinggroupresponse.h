// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBILLINGGROUPRESPONSE_H
#define QTAWS_CREATEBILLINGGROUPRESPONSE_H

#include "iotresponse.h"
#include "createbillinggrouprequest.h"

namespace QtAws {
namespace IoT {

class CreateBillingGroupResponsePrivate;

class QTAWSIOT_EXPORT CreateBillingGroupResponse : public IoTResponse {
    Q_OBJECT

public:
    CreateBillingGroupResponse(const CreateBillingGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateBillingGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBillingGroupResponse)
    Q_DISABLE_COPY(CreateBillingGroupResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
