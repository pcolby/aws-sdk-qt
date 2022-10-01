// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOLVERSBYFUNCTIONREQUEST_H
#define QTAWS_LISTRESOLVERSBYFUNCTIONREQUEST_H

#include "appsyncrequest.h"

namespace QtAws {
namespace AppSync {

class ListResolversByFunctionRequestPrivate;

class QTAWSAPPSYNC_EXPORT ListResolversByFunctionRequest : public AppSyncRequest {

public:
    ListResolversByFunctionRequest(const ListResolversByFunctionRequest &other);
    ListResolversByFunctionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResolversByFunctionRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
