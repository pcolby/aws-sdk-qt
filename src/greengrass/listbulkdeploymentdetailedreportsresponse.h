// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBULKDEPLOYMENTDETAILEDREPORTSRESPONSE_H
#define QTAWS_LISTBULKDEPLOYMENTDETAILEDREPORTSRESPONSE_H

#include "greengrassresponse.h"
#include "listbulkdeploymentdetailedreportsrequest.h"

namespace QtAws {
namespace Greengrass {

class ListBulkDeploymentDetailedReportsResponsePrivate;

class QTAWSGREENGRASS_EXPORT ListBulkDeploymentDetailedReportsResponse : public GreengrassResponse {
    Q_OBJECT

public:
    ListBulkDeploymentDetailedReportsResponse(const ListBulkDeploymentDetailedReportsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBulkDeploymentDetailedReportsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBulkDeploymentDetailedReportsResponse)
    Q_DISABLE_COPY(ListBulkDeploymentDetailedReportsResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
