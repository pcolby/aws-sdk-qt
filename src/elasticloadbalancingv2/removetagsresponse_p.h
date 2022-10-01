// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETAGSRESPONSE_P_H
#define QTAWS_REMOVETAGSRESPONSE_P_H

#include "elasticloadbalancingv2response_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class RemoveTagsResponse;

class RemoveTagsResponsePrivate : public ElasticLoadBalancingv2ResponsePrivate {

public:

    explicit RemoveTagsResponsePrivate(RemoveTagsResponse * const q);

    void parseRemoveTagsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveTagsResponse)
    Q_DISABLE_COPY(RemoveTagsResponsePrivate)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
