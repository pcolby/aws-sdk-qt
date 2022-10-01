// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEPLOYMENTSRESPONSE_P_H
#define QTAWS_LISTDEPLOYMENTSRESPONSE_P_H

#include "greengrassv2response_p.h"

namespace QtAws {
namespace GreengrassV2 {

class ListDeploymentsResponse;

class ListDeploymentsResponsePrivate : public GreengrassV2ResponsePrivate {

public:

    explicit ListDeploymentsResponsePrivate(ListDeploymentsResponse * const q);

    void parseListDeploymentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDeploymentsResponse)
    Q_DISABLE_COPY(ListDeploymentsResponsePrivate)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
