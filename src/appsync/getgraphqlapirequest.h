// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGRAPHQLAPIREQUEST_H
#define QTAWS_GETGRAPHQLAPIREQUEST_H

#include "appsyncrequest.h"

namespace QtAws {
namespace AppSync {

class GetGraphqlApiRequestPrivate;

class QTAWSAPPSYNC_EXPORT GetGraphqlApiRequest : public AppSyncRequest {

public:
    GetGraphqlApiRequest(const GetGraphqlApiRequest &other);
    GetGraphqlApiRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGraphqlApiRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
