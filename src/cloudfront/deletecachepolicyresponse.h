// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECACHEPOLICYRESPONSE_H
#define QTAWS_DELETECACHEPOLICYRESPONSE_H

#include "cloudfrontresponse.h"
#include "deletecachepolicyrequest.h"

namespace QtAws {
namespace CloudFront {

class DeleteCachePolicyResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT DeleteCachePolicyResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    DeleteCachePolicyResponse(const DeleteCachePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCachePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCachePolicyResponse)
    Q_DISABLE_COPY(DeleteCachePolicyResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
