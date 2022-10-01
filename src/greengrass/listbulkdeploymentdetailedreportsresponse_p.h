// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBULKDEPLOYMENTDETAILEDREPORTSRESPONSE_P_H
#define QTAWS_LISTBULKDEPLOYMENTDETAILEDREPORTSRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class ListBulkDeploymentDetailedReportsResponse;

class ListBulkDeploymentDetailedReportsResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit ListBulkDeploymentDetailedReportsResponsePrivate(ListBulkDeploymentDetailedReportsResponse * const q);

    void parseListBulkDeploymentDetailedReportsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBulkDeploymentDetailedReportsResponse)
    Q_DISABLE_COPY(ListBulkDeploymentDetailedReportsResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
