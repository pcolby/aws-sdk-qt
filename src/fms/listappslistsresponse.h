// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPSLISTSRESPONSE_H
#define QTAWS_LISTAPPSLISTSRESPONSE_H

#include "fmsresponse.h"
#include "listappslistsrequest.h"

namespace QtAws {
namespace Fms {

class ListAppsListsResponsePrivate;

class QTAWSFMS_EXPORT ListAppsListsResponse : public FmsResponse {
    Q_OBJECT

public:
    ListAppsListsResponse(const ListAppsListsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAppsListsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAppsListsResponse)
    Q_DISABLE_COPY(ListAppsListsResponse)

};

} // namespace Fms
} // namespace QtAws

#endif
