// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPICACHEREQUEST_H
#define QTAWS_CREATEAPICACHEREQUEST_H

#include "appsyncrequest.h"

namespace QtAws {
namespace AppSync {

class CreateApiCacheRequestPrivate;

class QTAWSAPPSYNC_EXPORT CreateApiCacheRequest : public AppSyncRequest {

public:
    CreateApiCacheRequest(const CreateApiCacheRequest &other);
    CreateApiCacheRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateApiCacheRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
