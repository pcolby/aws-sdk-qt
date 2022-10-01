// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKENDSTORAGEREQUEST_H
#define QTAWS_DELETEBACKENDSTORAGEREQUEST_H

#include "amplifybackendrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class DeleteBackendStorageRequestPrivate;

class QTAWSAMPLIFYBACKEND_EXPORT DeleteBackendStorageRequest : public AmplifyBackendRequest {

public:
    DeleteBackendStorageRequest(const DeleteBackendStorageRequest &other);
    DeleteBackendStorageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBackendStorageRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
