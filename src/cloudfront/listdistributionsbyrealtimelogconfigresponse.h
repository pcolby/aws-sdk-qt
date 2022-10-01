// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISTRIBUTIONSBYREALTIMELOGCONFIGRESPONSE_H
#define QTAWS_LISTDISTRIBUTIONSBYREALTIMELOGCONFIGRESPONSE_H

#include "cloudfrontresponse.h"
#include "listdistributionsbyrealtimelogconfigrequest.h"

namespace QtAws {
namespace CloudFront {

class ListDistributionsByRealtimeLogConfigResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT ListDistributionsByRealtimeLogConfigResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    ListDistributionsByRealtimeLogConfigResponse(const ListDistributionsByRealtimeLogConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDistributionsByRealtimeLogConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDistributionsByRealtimeLogConfigResponse)
    Q_DISABLE_COPY(ListDistributionsByRealtimeLogConfigResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
