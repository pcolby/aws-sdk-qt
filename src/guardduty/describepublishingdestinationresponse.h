// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPUBLISHINGDESTINATIONRESPONSE_H
#define QTAWS_DESCRIBEPUBLISHINGDESTINATIONRESPONSE_H

#include "guarddutyresponse.h"
#include "describepublishingdestinationrequest.h"

namespace QtAws {
namespace GuardDuty {

class DescribePublishingDestinationResponsePrivate;

class QTAWSGUARDDUTY_EXPORT DescribePublishingDestinationResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    DescribePublishingDestinationResponse(const DescribePublishingDestinationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePublishingDestinationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePublishingDestinationResponse)
    Q_DISABLE_COPY(DescribePublishingDestinationResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
