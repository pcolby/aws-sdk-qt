// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCACHEPOLICIESRESPONSE_H
#define QTAWS_LISTCACHEPOLICIESRESPONSE_H

#include "cloudfrontresponse.h"
#include "listcachepoliciesrequest.h"

namespace QtAws {
namespace CloudFront {

class ListCachePoliciesResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT ListCachePoliciesResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    ListCachePoliciesResponse(const ListCachePoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCachePoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCachePoliciesResponse)
    Q_DISABLE_COPY(ListCachePoliciesResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
