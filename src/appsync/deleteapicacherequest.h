// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPICACHEREQUEST_H
#define QTAWS_DELETEAPICACHEREQUEST_H

#include "appsyncrequest.h"

namespace QtAws {
namespace AppSync {

class DeleteApiCacheRequestPrivate;

class QTAWSAPPSYNC_EXPORT DeleteApiCacheRequest : public AppSyncRequest {

public:
    DeleteApiCacheRequest(const DeleteApiCacheRequest &other);
    DeleteApiCacheRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteApiCacheRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
