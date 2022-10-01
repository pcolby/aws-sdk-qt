// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEFFECTIVEDEPLOYMENTSRESPONSE_P_H
#define QTAWS_LISTEFFECTIVEDEPLOYMENTSRESPONSE_P_H

#include "greengrassv2response_p.h"

namespace QtAws {
namespace GreengrassV2 {

class ListEffectiveDeploymentsResponse;

class ListEffectiveDeploymentsResponsePrivate : public GreengrassV2ResponsePrivate {

public:

    explicit ListEffectiveDeploymentsResponsePrivate(ListEffectiveDeploymentsResponse * const q);

    void parseListEffectiveDeploymentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEffectiveDeploymentsResponse)
    Q_DISABLE_COPY(ListEffectiveDeploymentsResponsePrivate)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
