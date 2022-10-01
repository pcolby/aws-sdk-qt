// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECACHEPOLICYRESPONSE_H
#define QTAWS_CREATECACHEPOLICYRESPONSE_H

#include "cloudfrontresponse.h"
#include "createcachepolicyrequest.h"

namespace QtAws {
namespace CloudFront {

class CreateCachePolicyResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT CreateCachePolicyResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    CreateCachePolicyResponse(const CreateCachePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCachePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCachePolicyResponse)
    Q_DISABLE_COPY(CreateCachePolicyResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
