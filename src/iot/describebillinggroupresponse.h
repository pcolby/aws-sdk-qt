// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBILLINGGROUPRESPONSE_H
#define QTAWS_DESCRIBEBILLINGGROUPRESPONSE_H

#include "iotresponse.h"
#include "describebillinggrouprequest.h"

namespace QtAws {
namespace IoT {

class DescribeBillingGroupResponsePrivate;

class QTAWSIOT_EXPORT DescribeBillingGroupResponse : public IoTResponse {
    Q_OBJECT

public:
    DescribeBillingGroupResponse(const DescribeBillingGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeBillingGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBillingGroupResponse)
    Q_DISABLE_COPY(DescribeBillingGroupResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
