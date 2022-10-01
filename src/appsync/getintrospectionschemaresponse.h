// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTROSPECTIONSCHEMARESPONSE_H
#define QTAWS_GETINTROSPECTIONSCHEMARESPONSE_H

#include "appsyncresponse.h"
#include "getintrospectionschemarequest.h"

namespace QtAws {
namespace AppSync {

class GetIntrospectionSchemaResponsePrivate;

class QTAWSAPPSYNC_EXPORT GetIntrospectionSchemaResponse : public AppSyncResponse {
    Q_OBJECT

public:
    GetIntrospectionSchemaResponse(const GetIntrospectionSchemaRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetIntrospectionSchemaRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIntrospectionSchemaResponse)
    Q_DISABLE_COPY(GetIntrospectionSchemaResponse)

};

} // namespace AppSync
} // namespace QtAws

#endif
