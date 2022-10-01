// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORIGINREQUESTPOLICIESRESPONSE_H
#define QTAWS_LISTORIGINREQUESTPOLICIESRESPONSE_H

#include "cloudfrontresponse.h"
#include "listoriginrequestpoliciesrequest.h"

namespace QtAws {
namespace CloudFront {

class ListOriginRequestPoliciesResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT ListOriginRequestPoliciesResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    ListOriginRequestPoliciesResponse(const ListOriginRequestPoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListOriginRequestPoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOriginRequestPoliciesResponse)
    Q_DISABLE_COPY(ListOriginRequestPoliciesResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
