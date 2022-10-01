// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPICACHEREQUEST_H
#define QTAWS_GETAPICACHEREQUEST_H

#include "appsyncrequest.h"

namespace QtAws {
namespace AppSync {

class GetApiCacheRequestPrivate;

class QTAWSAPPSYNC_EXPORT GetApiCacheRequest : public AppSyncRequest {

public:
    GetApiCacheRequest(const GetApiCacheRequest &other);
    GetApiCacheRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApiCacheRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
