// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESPONSEHEADERSPOLICYRESPONSE_H
#define QTAWS_CREATERESPONSEHEADERSPOLICYRESPONSE_H

#include "cloudfrontresponse.h"
#include "createresponseheaderspolicyrequest.h"

namespace QtAws {
namespace CloudFront {

class CreateResponseHeadersPolicyResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT CreateResponseHeadersPolicyResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    CreateResponseHeadersPolicyResponse(const CreateResponseHeadersPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateResponseHeadersPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateResponseHeadersPolicyResponse)
    Q_DISABLE_COPY(CreateResponseHeadersPolicyResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
