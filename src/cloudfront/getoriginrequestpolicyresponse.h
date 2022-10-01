// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETORIGINREQUESTPOLICYRESPONSE_H
#define QTAWS_GETORIGINREQUESTPOLICYRESPONSE_H

#include "cloudfrontresponse.h"
#include "getoriginrequestpolicyrequest.h"

namespace QtAws {
namespace CloudFront {

class GetOriginRequestPolicyResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT GetOriginRequestPolicyResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    GetOriginRequestPolicyResponse(const GetOriginRequestPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetOriginRequestPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOriginRequestPolicyResponse)
    Q_DISABLE_COPY(GetOriginRequestPolicyResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
