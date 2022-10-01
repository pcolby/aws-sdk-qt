// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESPONSEHEADERSPOLICYRESPONSE_H
#define QTAWS_GETRESPONSEHEADERSPOLICYRESPONSE_H

#include "cloudfrontresponse.h"
#include "getresponseheaderspolicyrequest.h"

namespace QtAws {
namespace CloudFront {

class GetResponseHeadersPolicyResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT GetResponseHeadersPolicyResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    GetResponseHeadersPolicyResponse(const GetResponseHeadersPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetResponseHeadersPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResponseHeadersPolicyResponse)
    Q_DISABLE_COPY(GetResponseHeadersPolicyResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
