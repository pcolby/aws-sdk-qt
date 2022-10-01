// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLOUDFRONTORIGINACCESSIDENTITYRESPONSE_H
#define QTAWS_DELETECLOUDFRONTORIGINACCESSIDENTITYRESPONSE_H

#include "cloudfrontresponse.h"
#include "deletecloudfrontoriginaccessidentityrequest.h"

namespace QtAws {
namespace CloudFront {

class DeleteCloudFrontOriginAccessIdentityResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT DeleteCloudFrontOriginAccessIdentityResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    DeleteCloudFrontOriginAccessIdentityResponse(const DeleteCloudFrontOriginAccessIdentityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCloudFrontOriginAccessIdentityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCloudFrontOriginAccessIdentityResponse)
    Q_DISABLE_COPY(DeleteCloudFrontOriginAccessIdentityResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
