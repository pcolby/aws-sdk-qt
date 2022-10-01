// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FLUSHAPICACHEREQUEST_H
#define QTAWS_FLUSHAPICACHEREQUEST_H

#include "appsyncrequest.h"

namespace QtAws {
namespace AppSync {

class FlushApiCacheRequestPrivate;

class QTAWSAPPSYNC_EXPORT FlushApiCacheRequest : public AppSyncRequest {

public:
    FlushApiCacheRequest(const FlushApiCacheRequest &other);
    FlushApiCacheRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(FlushApiCacheRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
