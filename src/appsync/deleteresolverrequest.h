// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOLVERREQUEST_H
#define QTAWS_DELETERESOLVERREQUEST_H

#include "appsyncrequest.h"

namespace QtAws {
namespace AppSync {

class DeleteResolverRequestPrivate;

class QTAWSAPPSYNC_EXPORT DeleteResolverRequest : public AppSyncRequest {

public:
    DeleteResolverRequest(const DeleteResolverRequest &other);
    DeleteResolverRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteResolverRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
