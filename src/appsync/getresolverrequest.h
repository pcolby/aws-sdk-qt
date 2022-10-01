// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOLVERREQUEST_H
#define QTAWS_GETRESOLVERREQUEST_H

#include "appsyncrequest.h"

namespace QtAws {
namespace AppSync {

class GetResolverRequestPrivate;

class QTAWSAPPSYNC_EXPORT GetResolverRequest : public AppSyncRequest {

public:
    GetResolverRequest(const GetResolverRequest &other);
    GetResolverRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResolverRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
