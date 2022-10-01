// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPICACHEREQUEST_H
#define QTAWS_UPDATEAPICACHEREQUEST_H

#include "appsyncrequest.h"

namespace QtAws {
namespace AppSync {

class UpdateApiCacheRequestPrivate;

class QTAWSAPPSYNC_EXPORT UpdateApiCacheRequest : public AppSyncRequest {

public:
    UpdateApiCacheRequest(const UpdateApiCacheRequest &other);
    UpdateApiCacheRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateApiCacheRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
