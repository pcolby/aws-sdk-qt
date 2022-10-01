// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPIKEYREQUEST_H
#define QTAWS_CREATEAPIKEYREQUEST_H

#include "appsyncrequest.h"

namespace QtAws {
namespace AppSync {

class CreateApiKeyRequestPrivate;

class QTAWSAPPSYNC_EXPORT CreateApiKeyRequest : public AppSyncRequest {

public:
    CreateApiKeyRequest(const CreateApiKeyRequest &other);
    CreateApiKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateApiKeyRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
