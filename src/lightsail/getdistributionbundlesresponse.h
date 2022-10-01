// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISTRIBUTIONBUNDLESRESPONSE_H
#define QTAWS_GETDISTRIBUTIONBUNDLESRESPONSE_H

#include "lightsailresponse.h"
#include "getdistributionbundlesrequest.h"

namespace QtAws {
namespace Lightsail {

class GetDistributionBundlesResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetDistributionBundlesResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetDistributionBundlesResponse(const GetDistributionBundlesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDistributionBundlesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDistributionBundlesResponse)
    Q_DISABLE_COPY(GetDistributionBundlesResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
