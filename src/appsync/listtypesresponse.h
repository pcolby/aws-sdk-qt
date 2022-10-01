// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTYPESRESPONSE_H
#define QTAWS_LISTTYPESRESPONSE_H

#include "appsyncresponse.h"
#include "listtypesrequest.h"

namespace QtAws {
namespace AppSync {

class ListTypesResponsePrivate;

class QTAWSAPPSYNC_EXPORT ListTypesResponse : public AppSyncResponse {
    Q_OBJECT

public:
    ListTypesResponse(const ListTypesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTypesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTypesResponse)
    Q_DISABLE_COPY(ListTypesResponse)

};

} // namespace AppSync
} // namespace QtAws

#endif
