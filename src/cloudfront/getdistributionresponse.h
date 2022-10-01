// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISTRIBUTIONRESPONSE_H
#define QTAWS_GETDISTRIBUTIONRESPONSE_H

#include "cloudfrontresponse.h"
#include "getdistributionrequest.h"

namespace QtAws {
namespace CloudFront {

class GetDistributionResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT GetDistributionResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    GetDistributionResponse(const GetDistributionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDistributionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDistributionResponse)
    Q_DISABLE_COPY(GetDistributionResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
