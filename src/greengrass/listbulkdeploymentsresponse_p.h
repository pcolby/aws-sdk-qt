// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBULKDEPLOYMENTSRESPONSE_P_H
#define QTAWS_LISTBULKDEPLOYMENTSRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class ListBulkDeploymentsResponse;

class ListBulkDeploymentsResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit ListBulkDeploymentsResponsePrivate(ListBulkDeploymentsResponse * const q);

    void parseListBulkDeploymentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBulkDeploymentsResponse)
    Q_DISABLE_COPY(ListBulkDeploymentsResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
