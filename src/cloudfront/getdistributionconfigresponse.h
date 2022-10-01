// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISTRIBUTIONCONFIGRESPONSE_H
#define QTAWS_GETDISTRIBUTIONCONFIGRESPONSE_H

#include "cloudfrontresponse.h"
#include "getdistributionconfigrequest.h"

namespace QtAws {
namespace CloudFront {

class GetDistributionConfigResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT GetDistributionConfigResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    GetDistributionConfigResponse(const GetDistributionConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDistributionConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDistributionConfigResponse)
    Q_DISABLE_COPY(GetDistributionConfigResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
