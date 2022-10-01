// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCLOUDFRONTORIGINACCESSIDENTITIESRESPONSE_H
#define QTAWS_LISTCLOUDFRONTORIGINACCESSIDENTITIESRESPONSE_H

#include "cloudfrontresponse.h"
#include "listcloudfrontoriginaccessidentitiesrequest.h"

namespace QtAws {
namespace CloudFront {

class ListCloudFrontOriginAccessIdentitiesResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT ListCloudFrontOriginAccessIdentitiesResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    ListCloudFrontOriginAccessIdentitiesResponse(const ListCloudFrontOriginAccessIdentitiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCloudFrontOriginAccessIdentitiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCloudFrontOriginAccessIdentitiesResponse)
    Q_DISABLE_COPY(ListCloudFrontOriginAccessIdentitiesResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
