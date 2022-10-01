// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESPONSEHEADERSPOLICYRESPONSE_H
#define QTAWS_DELETERESPONSEHEADERSPOLICYRESPONSE_H

#include "cloudfrontresponse.h"
#include "deleteresponseheaderspolicyrequest.h"

namespace QtAws {
namespace CloudFront {

class DeleteResponseHeadersPolicyResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT DeleteResponseHeadersPolicyResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    DeleteResponseHeadersPolicyResponse(const DeleteResponseHeadersPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteResponseHeadersPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteResponseHeadersPolicyResponse)
    Q_DISABLE_COPY(DeleteResponseHeadersPolicyResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
