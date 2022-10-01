// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESPOTDATAFEEDSUBSCRIPTIONRESPONSE_H
#define QTAWS_DESCRIBESPOTDATAFEEDSUBSCRIPTIONRESPONSE_H

#include "ec2response.h"
#include "describespotdatafeedsubscriptionrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeSpotDatafeedSubscriptionResponsePrivate;

class QTAWSEC2_EXPORT DescribeSpotDatafeedSubscriptionResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeSpotDatafeedSubscriptionResponse(const DescribeSpotDatafeedSubscriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSpotDatafeedSubscriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSpotDatafeedSubscriptionResponse)
    Q_DISABLE_COPY(DescribeSpotDatafeedSubscriptionResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
