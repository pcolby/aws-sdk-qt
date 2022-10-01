// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISTRIBUTIONSBYWEBACLIDRESPONSE_H
#define QTAWS_LISTDISTRIBUTIONSBYWEBACLIDRESPONSE_H

#include "cloudfrontresponse.h"
#include "listdistributionsbywebaclidrequest.h"

namespace QtAws {
namespace CloudFront {

class ListDistributionsByWebACLIdResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT ListDistributionsByWebACLIdResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    ListDistributionsByWebACLIdResponse(const ListDistributionsByWebACLIdRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDistributionsByWebACLIdRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDistributionsByWebACLIdResponse)
    Q_DISABLE_COPY(ListDistributionsByWebACLIdResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
