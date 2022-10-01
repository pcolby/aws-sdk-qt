// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISTRIBUTIONLATESTCACHERESETRESPONSE_H
#define QTAWS_GETDISTRIBUTIONLATESTCACHERESETRESPONSE_H

#include "lightsailresponse.h"
#include "getdistributionlatestcacheresetrequest.h"

namespace QtAws {
namespace Lightsail {

class GetDistributionLatestCacheResetResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetDistributionLatestCacheResetResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetDistributionLatestCacheResetResponse(const GetDistributionLatestCacheResetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDistributionLatestCacheResetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDistributionLatestCacheResetResponse)
    Q_DISABLE_COPY(GetDistributionLatestCacheResetResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
