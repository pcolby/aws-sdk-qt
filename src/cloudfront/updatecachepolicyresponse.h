// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECACHEPOLICYRESPONSE_H
#define QTAWS_UPDATECACHEPOLICYRESPONSE_H

#include "cloudfrontresponse.h"
#include "updatecachepolicyrequest.h"

namespace QtAws {
namespace CloudFront {

class UpdateCachePolicyResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT UpdateCachePolicyResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    UpdateCachePolicyResponse(const UpdateCachePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateCachePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCachePolicyResponse)
    Q_DISABLE_COPY(UpdateCachePolicyResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
