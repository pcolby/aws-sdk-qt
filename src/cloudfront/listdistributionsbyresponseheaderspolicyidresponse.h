// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISTRIBUTIONSBYRESPONSEHEADERSPOLICYIDRESPONSE_H
#define QTAWS_LISTDISTRIBUTIONSBYRESPONSEHEADERSPOLICYIDRESPONSE_H

#include "cloudfrontresponse.h"
#include "listdistributionsbyresponseheaderspolicyidrequest.h"

namespace QtAws {
namespace CloudFront {

class ListDistributionsByResponseHeadersPolicyIdResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT ListDistributionsByResponseHeadersPolicyIdResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    ListDistributionsByResponseHeadersPolicyIdResponse(const ListDistributionsByResponseHeadersPolicyIdRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDistributionsByResponseHeadersPolicyIdRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDistributionsByResponseHeadersPolicyIdResponse)
    Q_DISABLE_COPY(ListDistributionsByResponseHeadersPolicyIdResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
