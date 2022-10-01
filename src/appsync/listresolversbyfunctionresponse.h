// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOLVERSBYFUNCTIONRESPONSE_H
#define QTAWS_LISTRESOLVERSBYFUNCTIONRESPONSE_H

#include "appsyncresponse.h"
#include "listresolversbyfunctionrequest.h"

namespace QtAws {
namespace AppSync {

class ListResolversByFunctionResponsePrivate;

class QTAWSAPPSYNC_EXPORT ListResolversByFunctionResponse : public AppSyncResponse {
    Q_OBJECT

public:
    ListResolversByFunctionResponse(const ListResolversByFunctionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListResolversByFunctionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResolversByFunctionResponse)
    Q_DISABLE_COPY(ListResolversByFunctionResponse)

};

} // namespace AppSync
} // namespace QtAws

#endif
