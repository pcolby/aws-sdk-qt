// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGRAPHQLAPISRESPONSE_H
#define QTAWS_LISTGRAPHQLAPISRESPONSE_H

#include "appsyncresponse.h"
#include "listgraphqlapisrequest.h"

namespace QtAws {
namespace AppSync {

class ListGraphqlApisResponsePrivate;

class QTAWSAPPSYNC_EXPORT ListGraphqlApisResponse : public AppSyncResponse {
    Q_OBJECT

public:
    ListGraphqlApisResponse(const ListGraphqlApisRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListGraphqlApisRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGraphqlApisResponse)
    Q_DISABLE_COPY(ListGraphqlApisResponse)

};

} // namespace AppSync
} // namespace QtAws

#endif
