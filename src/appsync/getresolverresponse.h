// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOLVERRESPONSE_H
#define QTAWS_GETRESOLVERRESPONSE_H

#include "appsyncresponse.h"
#include "getresolverrequest.h"

namespace QtAws {
namespace AppSync {

class GetResolverResponsePrivate;

class QTAWSAPPSYNC_EXPORT GetResolverResponse : public AppSyncResponse {
    Q_OBJECT

public:
    GetResolverResponse(const GetResolverRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetResolverRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResolverResponse)
    Q_DISABLE_COPY(GetResolverResponse)

};

} // namespace AppSync
} // namespace QtAws

#endif
