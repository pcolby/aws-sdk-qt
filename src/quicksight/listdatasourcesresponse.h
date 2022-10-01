// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASOURCESRESPONSE_H
#define QTAWS_LISTDATASOURCESRESPONSE_H

#include "quicksightresponse.h"
#include "listdatasourcesrequest.h"

namespace QtAws {
namespace QuickSight {

class ListDataSourcesResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT ListDataSourcesResponse : public QuickSightResponse {
    Q_OBJECT

public:
    ListDataSourcesResponse(const ListDataSourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDataSourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDataSourcesResponse)
    Q_DISABLE_COPY(ListDataSourcesResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
