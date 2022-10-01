// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTROSPECTIONSCHEMAREQUEST_H
#define QTAWS_GETINTROSPECTIONSCHEMAREQUEST_H

#include "appsyncrequest.h"

namespace QtAws {
namespace AppSync {

class GetIntrospectionSchemaRequestPrivate;

class QTAWSAPPSYNC_EXPORT GetIntrospectionSchemaRequest : public AppSyncRequest {

public:
    GetIntrospectionSchemaRequest(const GetIntrospectionSchemaRequest &other);
    GetIntrospectionSchemaRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIntrospectionSchemaRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
