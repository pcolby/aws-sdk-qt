// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGRAPHQLAPISREQUEST_H
#define QTAWS_LISTGRAPHQLAPISREQUEST_H

#include "appsyncrequest.h"

namespace QtAws {
namespace AppSync {

class ListGraphqlApisRequestPrivate;

class QTAWSAPPSYNC_EXPORT ListGraphqlApisRequest : public AppSyncRequest {

public:
    ListGraphqlApisRequest(const ListGraphqlApisRequest &other);
    ListGraphqlApisRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGraphqlApisRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
