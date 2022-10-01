// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFUNCTIONSRESPONSE_H
#define QTAWS_LISTFUNCTIONSRESPONSE_H

#include "appsyncresponse.h"
#include "listfunctionsrequest.h"

namespace QtAws {
namespace AppSync {

class ListFunctionsResponsePrivate;

class QTAWSAPPSYNC_EXPORT ListFunctionsResponse : public AppSyncResponse {
    Q_OBJECT

public:
    ListFunctionsResponse(const ListFunctionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFunctionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFunctionsResponse)
    Q_DISABLE_COPY(ListFunctionsResponse)

};

} // namespace AppSync
} // namespace QtAws

#endif
