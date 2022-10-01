// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISTRIBUTIONSBYKEYGROUPRESPONSE_H
#define QTAWS_LISTDISTRIBUTIONSBYKEYGROUPRESPONSE_H

#include "cloudfrontresponse.h"
#include "listdistributionsbykeygrouprequest.h"

namespace QtAws {
namespace CloudFront {

class ListDistributionsByKeyGroupResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT ListDistributionsByKeyGroupResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    ListDistributionsByKeyGroupResponse(const ListDistributionsByKeyGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDistributionsByKeyGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDistributionsByKeyGroupResponse)
    Q_DISABLE_COPY(ListDistributionsByKeyGroupResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
