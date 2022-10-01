// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEORIGINREQUESTPOLICYRESPONSE_H
#define QTAWS_UPDATEORIGINREQUESTPOLICYRESPONSE_H

#include "cloudfrontresponse.h"
#include "updateoriginrequestpolicyrequest.h"

namespace QtAws {
namespace CloudFront {

class UpdateOriginRequestPolicyResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT UpdateOriginRequestPolicyResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    UpdateOriginRequestPolicyResponse(const UpdateOriginRequestPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateOriginRequestPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateOriginRequestPolicyResponse)
    Q_DISABLE_COPY(UpdateOriginRequestPolicyResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
