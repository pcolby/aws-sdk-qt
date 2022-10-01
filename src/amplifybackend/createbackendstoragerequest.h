// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBACKENDSTORAGEREQUEST_H
#define QTAWS_CREATEBACKENDSTORAGEREQUEST_H

#include "amplifybackendrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class CreateBackendStorageRequestPrivate;

class QTAWSAMPLIFYBACKEND_EXPORT CreateBackendStorageRequest : public AmplifyBackendRequest {

public:
    CreateBackendStorageRequest(const CreateBackendStorageRequest &other);
    CreateBackendStorageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBackendStorageRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
