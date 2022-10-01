// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKENDSTORAGEREQUEST_H
#define QTAWS_GETBACKENDSTORAGEREQUEST_H

#include "amplifybackendrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class GetBackendStorageRequestPrivate;

class QTAWSAMPLIFYBACKEND_EXPORT GetBackendStorageRequest : public AmplifyBackendRequest {

public:
    GetBackendStorageRequest(const GetBackendStorageRequest &other);
    GetBackendStorageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBackendStorageRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
