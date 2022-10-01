// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPIKEYREQUEST_H
#define QTAWS_UPDATEAPIKEYREQUEST_H

#include "appsyncrequest.h"

namespace QtAws {
namespace AppSync {

class UpdateApiKeyRequestPrivate;

class QTAWSAPPSYNC_EXPORT UpdateApiKeyRequest : public AppSyncRequest {

public:
    UpdateApiKeyRequest(const UpdateApiKeyRequest &other);
    UpdateApiKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateApiKeyRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
