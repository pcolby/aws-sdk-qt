// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTROSPECTIONSCHEMAREQUEST_P_H
#define QTAWS_GETINTROSPECTIONSCHEMAREQUEST_P_H

#include "appsyncrequest_p.h"
#include "getintrospectionschemarequest.h"

namespace QtAws {
namespace AppSync {

class GetIntrospectionSchemaRequest;

class GetIntrospectionSchemaRequestPrivate : public AppSyncRequestPrivate {

public:
    GetIntrospectionSchemaRequestPrivate(const AppSyncRequest::Action action,
                                   GetIntrospectionSchemaRequest * const q);
    GetIntrospectionSchemaRequestPrivate(const GetIntrospectionSchemaRequestPrivate &other,
                                   GetIntrospectionSchemaRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetIntrospectionSchemaRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
