// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCACHEPOLICYCONFIGRESPONSE_H
#define QTAWS_GETCACHEPOLICYCONFIGRESPONSE_H

#include "cloudfrontresponse.h"
#include "getcachepolicyconfigrequest.h"

namespace QtAws {
namespace CloudFront {

class GetCachePolicyConfigResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT GetCachePolicyConfigResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    GetCachePolicyConfigResponse(const GetCachePolicyConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCachePolicyConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCachePolicyConfigResponse)
    Q_DISABLE_COPY(GetCachePolicyConfigResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
