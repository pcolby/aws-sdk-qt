// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCACHEPOLICYRESPONSE_H
#define QTAWS_GETCACHEPOLICYRESPONSE_H

#include "cloudfrontresponse.h"
#include "getcachepolicyrequest.h"

namespace QtAws {
namespace CloudFront {

class GetCachePolicyResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT GetCachePolicyResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    GetCachePolicyResponse(const GetCachePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCachePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCachePolicyResponse)
    Q_DISABLE_COPY(GetCachePolicyResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
