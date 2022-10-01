// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISTRIBUTIONSBYCACHEPOLICYIDRESPONSE_H
#define QTAWS_LISTDISTRIBUTIONSBYCACHEPOLICYIDRESPONSE_H

#include "cloudfrontresponse.h"
#include "listdistributionsbycachepolicyidrequest.h"

namespace QtAws {
namespace CloudFront {

class ListDistributionsByCachePolicyIdResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT ListDistributionsByCachePolicyIdResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    ListDistributionsByCachePolicyIdResponse(const ListDistributionsByCachePolicyIdRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDistributionsByCachePolicyIdRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDistributionsByCachePolicyIdResponse)
    Q_DISABLE_COPY(ListDistributionsByCachePolicyIdResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
