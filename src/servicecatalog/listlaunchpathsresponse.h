// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLAUNCHPATHSRESPONSE_H
#define QTAWS_LISTLAUNCHPATHSRESPONSE_H

#include "servicecatalogresponse.h"
#include "listlaunchpathsrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListLaunchPathsResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT ListLaunchPathsResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    ListLaunchPathsResponse(const ListLaunchPathsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListLaunchPathsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLaunchPathsResponse)
    Q_DISABLE_COPY(ListLaunchPathsResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
