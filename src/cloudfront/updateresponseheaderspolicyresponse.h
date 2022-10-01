// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESPONSEHEADERSPOLICYRESPONSE_H
#define QTAWS_UPDATERESPONSEHEADERSPOLICYRESPONSE_H

#include "cloudfrontresponse.h"
#include "updateresponseheaderspolicyrequest.h"

namespace QtAws {
namespace CloudFront {

class UpdateResponseHeadersPolicyResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT UpdateResponseHeadersPolicyResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    UpdateResponseHeadersPolicyResponse(const UpdateResponseHeadersPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateResponseHeadersPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateResponseHeadersPolicyResponse)
    Q_DISABLE_COPY(UpdateResponseHeadersPolicyResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
