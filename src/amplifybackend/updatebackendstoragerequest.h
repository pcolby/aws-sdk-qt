// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBACKENDSTORAGEREQUEST_H
#define QTAWS_UPDATEBACKENDSTORAGEREQUEST_H

#include "amplifybackendrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class UpdateBackendStorageRequestPrivate;

class QTAWSAMPLIFYBACKEND_EXPORT UpdateBackendStorageRequest : public AmplifyBackendRequest {

public:
    UpdateBackendStorageRequest(const UpdateBackendStorageRequest &other);
    UpdateBackendStorageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBackendStorageRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
