// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEORIGINREQUESTPOLICYRESPONSE_H
#define QTAWS_CREATEORIGINREQUESTPOLICYRESPONSE_H

#include "cloudfrontresponse.h"
#include "createoriginrequestpolicyrequest.h"

namespace QtAws {
namespace CloudFront {

class CreateOriginRequestPolicyResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT CreateOriginRequestPolicyResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    CreateOriginRequestPolicyResponse(const CreateOriginRequestPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateOriginRequestPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateOriginRequestPolicyResponse)
    Q_DISABLE_COPY(CreateOriginRequestPolicyResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
