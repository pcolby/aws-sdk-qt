// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEORIGINREQUESTPOLICYRESPONSE_H
#define QTAWS_DELETEORIGINREQUESTPOLICYRESPONSE_H

#include "cloudfrontresponse.h"
#include "deleteoriginrequestpolicyrequest.h"

namespace QtAws {
namespace CloudFront {

class DeleteOriginRequestPolicyResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT DeleteOriginRequestPolicyResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    DeleteOriginRequestPolicyResponse(const DeleteOriginRequestPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteOriginRequestPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteOriginRequestPolicyResponse)
    Q_DISABLE_COPY(DeleteOriginRequestPolicyResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
