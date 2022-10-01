// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBULKDEPLOYMENTSRESPONSE_H
#define QTAWS_LISTBULKDEPLOYMENTSRESPONSE_H

#include "greengrassresponse.h"
#include "listbulkdeploymentsrequest.h"

namespace QtAws {
namespace Greengrass {

class ListBulkDeploymentsResponsePrivate;

class QTAWSGREENGRASS_EXPORT ListBulkDeploymentsResponse : public GreengrassResponse {
    Q_OBJECT

public:
    ListBulkDeploymentsResponse(const ListBulkDeploymentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBulkDeploymentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBulkDeploymentsResponse)
    Q_DISABLE_COPY(ListBulkDeploymentsResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
