// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCACHEPOLICIESRESPONSE_P_H
#define QTAWS_LISTCACHEPOLICIESRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class ListCachePoliciesResponse;

class ListCachePoliciesResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit ListCachePoliciesResponsePrivate(ListCachePoliciesResponse * const q);

    void parseListCachePoliciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCachePoliciesResponse)
    Q_DISABLE_COPY(ListCachePoliciesResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
