// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESPONSEHEADERSPOLICYCONFIGRESPONSE_H
#define QTAWS_GETRESPONSEHEADERSPOLICYCONFIGRESPONSE_H

#include "cloudfrontresponse.h"
#include "getresponseheaderspolicyconfigrequest.h"

namespace QtAws {
namespace CloudFront {

class GetResponseHeadersPolicyConfigResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT GetResponseHeadersPolicyConfigResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    GetResponseHeadersPolicyConfigResponse(const GetResponseHeadersPolicyConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetResponseHeadersPolicyConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResponseHeadersPolicyConfigResponse)
    Q_DISABLE_COPY(GetResponseHeadersPolicyConfigResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
