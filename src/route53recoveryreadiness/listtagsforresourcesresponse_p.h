// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORRESOURCESRESPONSE_P_H
#define QTAWS_LISTTAGSFORRESOURCESRESPONSE_P_H

#include "route53recoveryreadinessresponse_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class ListTagsForResourcesResponse;

class ListTagsForResourcesResponsePrivate : public Route53RecoveryReadinessResponsePrivate {

public:

    explicit ListTagsForResourcesResponsePrivate(ListTagsForResourcesResponse * const q);

    void parseListTagsForResourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTagsForResourcesResponse)
    Q_DISABLE_COPY(ListTagsForResourcesResponsePrivate)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
