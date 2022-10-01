// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGRAPHQLAPIREQUEST_H
#define QTAWS_DELETEGRAPHQLAPIREQUEST_H

#include "appsyncrequest.h"

namespace QtAws {
namespace AppSync {

class DeleteGraphqlApiRequestPrivate;

class QTAWSAPPSYNC_EXPORT DeleteGraphqlApiRequest : public AppSyncRequest {

public:
    DeleteGraphqlApiRequest(const DeleteGraphqlApiRequest &other);
    DeleteGraphqlApiRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteGraphqlApiRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
