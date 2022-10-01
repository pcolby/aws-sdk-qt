// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESPONSEHEADERSPOLICIESRESPONSE_H
#define QTAWS_LISTRESPONSEHEADERSPOLICIESRESPONSE_H

#include "cloudfrontresponse.h"
#include "listresponseheaderspoliciesrequest.h"

namespace QtAws {
namespace CloudFront {

class ListResponseHeadersPoliciesResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT ListResponseHeadersPoliciesResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    ListResponseHeadersPoliciesResponse(const ListResponseHeadersPoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListResponseHeadersPoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResponseHeadersPoliciesResponse)
    Q_DISABLE_COPY(ListResponseHeadersPoliciesResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
